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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();


void fn_824A1078(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [48];
  
  iVar1 = *(int *)((param_2 + 1) * 8 + param_1);
  if ((iVar1 == param_3) || (iVar1 == 0)) {
    if (param_4 == 0) {
      if (param_5 == 0) {
        return;
      }
      fn_828648F0(auStack_40,0xffffffff83292a0c);
      uVar2 = fn_828647D8();
      auStack_50[0] = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      if (param_5 != 0) {
        return;
      }
      fn_828648F0(auStack_40,0xffffffff83292a0c);
      uVar2 = fn_828647D8();
      auStack_50[0] = *(undefined4 *)(param_1 + 0x18);
    }
    auStack_50[0] = fn_82535298(auStack_50,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82864898(auStack_40);
    fn_82536288(auStack_50);
  }
  return;
}

