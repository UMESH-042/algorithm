def hist(x,no_bins):
    no_samples = np.size(x)
    x_max = max(x)
    x_min = min(x)
    bins = np.linspace(x_min,x_max,no_bins)
    bin_width = abs(bins[1] - bins[0])
    freq = np.zeros(shape=(no_bins))
    for i in range(no_samples):
        for j in range(no_bins):
            if(x[i] <= bins[j]+0.5*bin_width and x[i] > bins[j]-bin_width):
                freq[j] += 1
                break
    freq =freq/(no_samples)
    return bins,freq
