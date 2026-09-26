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
extern int fn_822B17A8();
extern int fn_8236F648();
extern int fn_82373C68();
extern int fn_82373F48();
extern int fn_82374078();
extern int fn_824D2AE8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_8238BDD8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 1;
  fn_82373F48(iVar1);
  fn_8236F648(iVar1,param_2);
  fn_82373C68(iVar1,param_2,*(int *)(iVar1 + 0x200) == 1);
  fn_824D2AE8(&iStack_30,param_1 + 0xc);
  if (*(int *)(iStack_30 + 0x2148) == 0xb) {
    fn_82374078(iVar1,param_2,0x31);
  }
  iVar1 = *(int *)(iStack_30 + 0x2130);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) == (int)param_2)) {
    if ((*(int *)(iVar1 + 0x24) != 0) &&
       (((*(uint *)(iVar1 + 0x1ec) & 100) != 0 &&
        (iVar1 = *(int *)(*(int *)(iVar1 + 0x24) + 0x34), iVar1 != 0)))) {
      fn_822B17A8(iVar1,0x32,0);
    }
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

