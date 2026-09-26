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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8248B7E0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_8248C330(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x30);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x34)) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x18) == param_3) break;
    iVar1 = iVar1 + 0x20;
  }
  fn_82365BD8(&iStack_30,iVar1 + 0x10);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (iStack_30 != 0) {
    fn_82365BD8(&iStack_30,iVar1 + 0x10);
    (**(code **)*param_2)(param_2,&iStack_30);
  }
  fn_8248B7E0(iVar1);
  return 1;
}

