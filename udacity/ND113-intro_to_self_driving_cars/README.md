# conda env
```shell
conda remove --name nd113 --all
conda create --name nd113 python=3.6 -y
conda activate nd113 && conda install jupyterlab pandas matplotlib opencv -y
```