function memoize(fn) {
    const cache = {};
    return function(...args) {
        const key = args.join(',');
        if (key in cache) return cache[key];
        return cache[key] = fn(...args);
    }
}
