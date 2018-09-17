xcodepath=`xcode-select -p`
echo $xcodepath
temp='/Platforms/iPhoneOS.platform/DeviceSupport/12.0'
path=$xcodepath$temp
echo $path
mkdir -p $path
cp -r ./ios12/* $path
