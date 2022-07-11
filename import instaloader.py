import instaloader

test = instaloader.Instaloader()

acc = input('Instagram Kullanıcı Adını girin: ')

test.download_profile(acc, profile_pic_only=True)