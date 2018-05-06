let HLW8012 = {

    _create: ffi('void *mgos_hlw8012_create()'),
    //_cf_interrupt: ffi('void mgos_hlw8012_cf_interrupt(void *)'),
    //_cf1_interrupt: ffi('void mgos_hlw8012_cf1_interrupt(void *)'),
    _begin: ffi('void mgos_hlw8012_begin(void *)'),
    _getCurrent: ffi('double mgos_hlw8012_getCurrent(void *)'),
    _getVoltage: ffi('double mgos_hlw8012_getVoltage(void *)'),
    _getActivePower: ffi('double mgos_hlw8012_getActivePower(void *)'),
    _getApparentPower: ffi('double mgos_hlw8012_getApparentPower(void *)'),
    _getReactivePower: ffi('double mgos_hlw8012_getApparentPower(void *)'),
    _getPowerFactor: ffi('double mgos_hlw8012_getPowerFactor(void *)'),
    _getEnergy: ffi('double mgos_hlw8012_getEnergy(void *)'),

    _proto: {

        // Public functions

        /*cf_interrupt: function () {
            HLW8012._cf_interrupt(this.hlw);
        }

        cf1_interrupt: function () {
            HLW8012._cf1_interrupt(this.hlw);
        }*/


        // ## **`myHTU.begin()`**
        // Initialize sensor and make it ready for use.
        // Return value: 1 if sensor is ready, 0 otherwise.
        begin: function () {
            return HLW8012._begin(this.hlw);
        },

        // ## **`myHTU.readTemperature()`**
        // Read the current temperature.
        // Return value: current temperature value in Celsius as a double.
        getCurrent: function () {
            return HLW8012._getCurrent(this.hlw);
        },

        // ## **`myHTU.readHumidity()`**
        // Read the current relative humidity as a percentage.
        // Return value: current humidity value as a double.
        getVoltage: function () {
            return HLW8012._getVoltage(this.hlw);
        },

        getActivePower: function () {
            return HLW8012._getActivePower(this.hlw);
        },

        getApparentPower: function () {
            return HLW8012._getApparentPower(this.hlw);
        },

        getReactivePower: function () {
            return HLW8012._getReactivePower(this.hlw);
        },

        getPowerFactor: function () {
            return HLW8012._getPowerFactor(this.hlw);
        },

        getEnergy: function () {
            return HLW8012._getEnergy(this.hlw);
        },


        
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
