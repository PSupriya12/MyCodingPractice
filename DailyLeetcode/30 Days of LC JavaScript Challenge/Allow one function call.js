/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
     
        var hasBeenCalled = false;
        var result;
    return function(...args){
        
        if(!hasBeenCalled)
        {
            result = fn.apply(this,args)
            hasBeenCalled = true;
            return result;
        }
        
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
