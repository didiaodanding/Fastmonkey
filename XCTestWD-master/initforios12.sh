xcodepath=`xcode-select -p`
echo $xcodepath
temp='/Platforms/iPhoneOS.platform/DeviceSupport/12.0'
path=$xcodepath$temp
echo $path
sudo mkdir -p $path
sudo chmod 777 $path
cp -r ./ios12/* $path
