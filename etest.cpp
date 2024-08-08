    int main() {
        IMyInterface* myInterface = new MyInterfaceImpl();

        // Call Method16
        BSTR bstr = SysAllocString(L"Hello, COM!");
        myInterface->Method16(42, bstr);
        SysFreeString(bstr);

        // Release the interface
        myInterface->Release();

        return 0;
    }
    