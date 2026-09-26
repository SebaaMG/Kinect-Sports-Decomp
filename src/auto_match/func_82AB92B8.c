typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82AB15D0();
extern int fn_82AB4E50();
extern int fn_82AB85C8();
extern int fn_82AB9200();
extern int fn_82BA02A8();


longlong fn_82AB92B8(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    lVar1 = 0x11;
  }
  else {
    fn_82AB9200(param_1);
    fn_82AB4E50(*(undefined4 *)(param_1 + 0x24));
    fn_82AB85C8(*(undefined4 *)(param_1 + 0x20),param_1);
    iVar2 = fn_82BA02A8(*(undefined4 *)(param_1 + 0x20));
    lVar1 = (**(code **)(iVar2 + 0x18))(*(undefined4 *)(iVar2 + 0x10),param_1);
    if (lVar1 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7340,0xffffffff820d7400,0xfd);
    }
  }
  return lVar1;
}

