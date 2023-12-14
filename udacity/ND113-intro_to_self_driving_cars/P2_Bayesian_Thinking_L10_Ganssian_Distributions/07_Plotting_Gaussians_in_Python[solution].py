#Exercise 1 - Calculate the Probability Density Function
def gaussian_density(x, mu, sigma):
    return (1/np.sqrt(2*np.pi*np.power(sigma, 2.))) * np.exp(-np.power(x - mu, 2.) / (2 * np.power(sigma, 2.)))

#Exercise 2 - Plot the Probability Density Function
import matplotlib.pyplot as plt

def plot_gaussian(x, mu, sigma):

    y = gaussian_density(x, mu, sigma)

    plt.plot(x, y)
    plt.title('Gaussian Probability Density Function')
    plt.xlabel('x variable')
    plt.ylabel('probability density function')
    plt.show()