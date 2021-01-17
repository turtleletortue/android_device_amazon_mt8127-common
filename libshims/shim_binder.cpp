extern "C" int _ZN7android6Parcel13writeString16EPKDsj();
extern "C" int _ZN7android6Parcel13writeString16EPKtj() {
    return _ZN7android6Parcel13writeString16EPKDsj();
}

extern "C" int _ZNK7android6Parcel18readParcelFileDescriptorEv(); // TBD can't find this symbol on libbinder?????
extern "C" int _ZNK7android6Parcel24readParcelFileDescriptorERi(int& outCommChannel) {
	return 0; //_ZNK7android6Parcel18readParcelFileDescriptorEv();
}

extern "C" int _ZN7android10IInterface8asBinderEv() {
    return 0;
}