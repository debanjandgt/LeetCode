var addTwoPromises = async function(promise1, promise2) {
    const [p1,p2]=await Promise.all([promise1,promise2]);
    return p1+p2;
};
