let HLW8012 = {

    _create: ffi('void *mgos_hlw8012_create()'),
    //_begin: ffi('void mgos_hlw8012_begin(void *, char, char, char, char, bool, int)'),
    
    _proto: {

        // Public functions

        // ## **`myHTU.begin()`**
        // Initialize sensor and make it ready for use.
        // Return value: 1 if sensor is ready, 0 otherwise.
        /*begin: function () {
            return HLW8012._begin(this.hlw);
        },*/

        
    },

    // ## **`Adafruit_HTU21DF.create()`**
    // Create an Adafruit_HTU21DF instance on I2C bus (address = 0x40).
    // Return value: an object with the methods defined in _proto: {...} (above).
    create: function () {
        let obj = Object.create(HLW8012._proto);
        // set default parameter values
        // Initialize Adafruit_HTU21DF library.
        // Return value: handle opaque pointer.
        obj.hlw = HLW8012._create();
        return obj;
    }

};
