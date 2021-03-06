import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

fname = '2019-08-10_trends'

data = pd.read_csv(f"{fname:s}.csv", index_col=0, usecols=[0, 1, 2, 3])

g = sns.lineplot(data=data,
                 palette="tab10",
                 dashes=True,
                 linewidth=1.5)

# do not show all ticks, only every 4th year start
ticks = [f'{year}-01' for year in range(2006, 2019, 4)]
plt.xticks(ticks)

# modify tick labels
ticks = [f'Jan 1 {year}' for year in range(2006, 2019, 4)]
g.set(xticklabels=ticks)

g.set(ylabel='relative search interest')

plt.savefig(f"{fname:s}.png", dpi=300.0)
