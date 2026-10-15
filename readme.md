# 使用：
注意：编译需要安装gflags等软件

sudo apt-get install -y libgflags-dev libsnappy-dev zlib1g-dev libbz2-dev liblz4-dev libzstd-dev

拉取源码

cd rocksdb_example/

mkdir build

cd build

cmake ../

make

./dgpp_rocskdb

生成的数据在 dgpp_rocksdb_demo/data/

设置 C++代码风格: 花括号{不换行, 缩进4;
"C_Cpp.clang_format_style": "{ BasedOnStyle: LLVM, IndentWidth: 4, UseTab: Never, BreakBeforeBraces: Attach }"


使用 rocksdb自带的 ldb 工具来查看 wal 文件格式和内容;
cd rocksdb
make ldb

./ldb dump_wal --walfile=../data/00003.log --header --print_value

./ldb manifest_dump --path="../data/MANIFEST-000005"

make sst_dump
./sst_dump --file=../data/sst_file.sst --command=raw


