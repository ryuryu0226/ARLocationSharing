## 実行/ビルドでコケる場合に試してほしいこと
- Grpc ライブラリが足りずに 実行/ビルドでこける場合
  1. ローカルリポジトリ上にライブラリの残骸が残っているので以下のフォルダとファイルを消します
    ```
    GeospatialSample/Assets/Plugins/Grpc.Core/
    GeospatialSample/Assets/Plugins/Grpc.Core.Api/
    GeospatialSample/Assets/Plugins/Grpc.Core.meta
    GeospatialSample/Assets/Plugins/Grpc.Core.Api.meta
    ```

  2. 公式配布ページから gRPC のライブラリをダウンロードして手動で配置します
    [このgRPCの配布ページ](https://packages.grpc.io/archive/2021/07/4daedf02335d0df21fa5442eb618a544dbe0f0a7-a68dac5f-2863-4ecc-be21-f5649ffc1709/index.xml)
    から 
    ```
    grpc_unity_package.2.40.0-dev202107040949.zip
    ```
    をダウンロードして解凍します。

  3. 解凍ファイル内にある以下のファイルを GeospatialSample/Assets/Plugins/ にコピーします
    ```
    Plugins/Grpc.Core/
    Plugins/Grpc.Core.Api/
    ```

- Project Settings の設定の違いにより 実行/ビルドが上手くいかない場合
  - Edit -> Project Settings -> Player の中の
    - Configuration -> Internet Access を Require に設定 (デフォルトはAuto)  
      ネットワークアクセス許可を得るために必要です

    - Optimization -> Strip Engine Code の チェックを外す  
      最適化により誤って必要なコードが除外されてしまうことを防止します

- その他ネットワーク周りの環境構築で参考にしたページ
  - [UnityとMagicOnionの環境構築（IL2CPP）](https://zenn.dev/kumatta_ss/articles/dab376b180aa85)
  - [Android 版のビルド、および実行手順](https://www.monobitengine.com/doc/mun/contents/Platform/Build_Android.htm)


## ARLocationSharing のサーバープログラム デプロイ手順(個人用メモです)

### 参考記事
  - [Unity:MagicOnionの.NET CoreコンテナサーバーをAWS Fargateで実行する方法](https://qiita.com/simplestar/items/b1d29e986b0b2cd6af2b)
  - [Ubuntu に .NET SDK または .NET ランタイムをインストールする](https://docs.microsoft.com/ja-jp/dotnet/core/install/linux-ubuntu)
    注意: sdk や ランタイムのバージョンを 3.1 に合わせる必要があります
  - [Docker入門記事](https://qiita.com/ryosuketter/items/c53352f1143366d8b9a9)

### 概要
  - docker を利用して .NET Core コンテナサーバー(MagicOnion)を実行する

### 環境
  - Ubuntu 20.04 (ConohaのVPS)
  - サーバープログラムの .NET は ver 3.1

### 手順
  1. /arserver ディレクトリを作成 (場所はどこでも良い)
  2. /arserver ディレクトリに 次のプロジェクトディレクトリをコピー
     - GeospatialSample/
     - NetworkApp-Server/
     - NetworkApp-Shared/
  3. NetworkApp-Server/Properties/lauchSettings.json を以下のように編集
     ```
      "applicationUrl": "http://0.0.0.0:12345",
     ```
     0.0.0.0 は docker 上で立ち上げるための設定 (実際のVPSサーバーのアドレスは 160.251.18.95 )
     12345 は Docker側のポート番号

  4. dotnet コマンドで Release ビルドを作成する
     dotnet コマンドがインストールされているか確認
     ```
     $ dotnet --help
     ```
     インストールされていなかったので [公式ドキュメント](https://docs.microsoft.com/ja-jp/dotnet/core/install/linux-ubuntu#2004) を参考にインストール
     ```
     wget https://packages.microsoft.com/config/ubuntu/20.04/packages-microsoft-prod.deb -O packages-microsoft-prod.deb
     sudo dpkg -i packages-microsoft-prod.deb
     rm packages-microsoft-prod.deb

     sudo apt-get update; \
      sudo apt-get install -y apt-transport-https && \
      sudo apt-get update && \
      sudo apt-get install -y dotnet-sdk-3.1 (←バージョンに注意!!)


     sudo apt-get update; \
      sudo apt-get install -y apt-transport-https && \
      sudo apt-get update && \
      sudo apt-get install -y aspnetcore-runtime-3.1 (←バージョンに注意!!)
     ```
     インストールが完了したら Release ビルドを作成する
     ```
     $ dotnet publish -c Release -o out
     ```
     NetworkApp-Server/out に各種 .dll が作成される
  5. NetworkApp-Server/out 内に Dockerfile という名前で dockerfile を作成
     ```
     $ cd NetworkApp-Server/out
     $ pwd
       /home/potkrin/arserver/NetworkApp-Server/out
     $ vi Dockerfile
     ```
     以下の内容を記述
     ```
     FROM mcr.microsoft.com/dotnet/aspnet:3.1       # dotnet のバージョンに注意
     WORKDIR /app
     COPY . .
     ENTRYPOINT ["dotnet", "NetworkApp-Server.dll"] # ←プロジェクトファイル名
     ```
  6. Dockerfile から image を作成
     docker コマンドがインストールされているか確認
     インストールされていなかったので [Ubuntu 20.04へのDockerのインストール](https://www.digitalocean.com/community/tutorials/how-to-install-and-use-docker-on-ubuntu-20-04-ja) を参考にインストール
     - ステップ1 を実行してインストール
     - ステップ3 で確認

     docker コマンドを実行して image 作成
     ```
     sudo docker build . -t arserver6:1.0
     ```
  7. Docker image を起動
    ```
    $ pwd
    /home/potkrin/arserver/NetworkApp-Server/out

    $ sudo docker run --rm -p 12345:80 arserver6:1.0
    info: Microsoft.Hosting.Lifetime[0]
          Now listening on: http://[::]:80
    info: Microsoft.Hosting.Lifetime[0]
          Application started. Press Ctrl+C to shut down.
    info: Microsoft.Hosting.Lifetime[0]
          Hosting environment: Production
    info: Microsoft.Hosting.Lifetime[0]
          Content root path: /app
    ```
    -p 12345:12345 で実行したがなぜかうまくいかないので 表示されている 80 番ポートを利用 (-p 12345:80)

  8. サーバーのポートを解放する
    今回は 12345 番ポートで待ち受け
    ```
    $ sudo ufw status
    $ sudo ufw allow 12345
      Rule added
      Rule added (v6)
    $ sudo ufw reload
      Firewall reloaded
    $ sudo ufw status
    ```
  9. クライアントアプリを実行して通信ができるか確認

- 詰まった点
  - NetworkApp-Server が依存してる他のプロジェクトも持ってこないと dotnet コマンドにより Release ビルドを作成できない
    ```
    /usr/share/dotnet/sdk/6.0.301/NuGet.targets(289,5): error MSB3202: The project file "/home/potkrin/arserver/NetworkApp-Shared/NetworkApp-Shared.csproj" was not found. [/home/potkrin/arserver/NetworkApp-Server/NetworkApp-Server.sln]

    /home/potkrin/arserver/NetworkApp-Server/Services/MyFirstService.cs(8,7): error CS0246: The type or namespace name 'MyApp' could not be found (are you missing a using directive or an assembly reference?) [/home/potkrin/arserver/NetworkApp-Server/NetworkApp-Server.csproj]
    ```
  - dotnet のバージョンが合っていなかったため動作しない (バージョンが違うだけだが dotonet sdk が無いと言われて少し困惑する)
    ```
    $ sudo docker run --rm -p 12345:5001 arserver3:1.0
      Did you mean to run dotnet SDK commands? Please install dotnet SDK from:
        https://go.microsoft.com/fwlink/?LinkID=798306&clcid=0x409
    ```
    Dockerfile のバージョン､ インストールした dotnet sdk や ランタイムのバージョンを確認
    dotnet sdk のライブラリは以下にあった
    ```
    $ ls /usr/share/dotnet/shared/Microsoft.AspNetCore.App/
      3.1.26  5.0.17  6.0.6
    ```

    




  
