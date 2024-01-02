# udacity

这里提供了joy ride的本地运行包，帮助你解决线上无法运行的问题。
本地需要安装anaconda以及jupyter notebook。

#### 具体方式
1. deep clone整个文件夹
```
git clone https://github.com/CheneyZeng/udacity.git
```

2. 安装必要的 Python 依赖包


对于 __Mac/OSX__：
	
```bash
cd udacity/joy_ride
conda env create -f environment.yml
source activate joy_ride
```

对于 __Windows__：
	
```bash
cd udacity/joy_ride
conda env create -f environment.yml
activate joy_ride
```
	
3. 打开 notebook

```
jupyter notebook ParallelParking-zh.ipynb
```
