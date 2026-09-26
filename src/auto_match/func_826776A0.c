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
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();


void fn_826776A0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  param_2 = -(uint)(param_2 < 0xf) & param_2;
  if ((iVar1 != 0) && (*(uint *)(param_1 + 0x20) != param_2)) {
    if ((*(uint *)(param_1 + 0x14) & 2) == 0) {
      fn_82637EC0(iVar1,1);
      fn_82637D70(*(undefined4 *)(param_1 + 0xd8),0);
      fn_82637DE0(*(undefined4 *)(param_1 + 0xd8),1);
      fn_82637E50(*(undefined4 *)(param_1 + 0xd8),7);
      iVar2 = param_2 * 0xc;
      fn_82637BC0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab278));
      fn_82637C50(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab274));
      iVar1 = -0x7ceab270;
    }
    else {
      fn_82637EC0(iVar1,1);
      iVar2 = param_2 * 0x18;
      fn_82637D70(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab1bc));
      fn_82637DE0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab1b0));
      fn_82637E50(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab1ac));
      fn_82637BC0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab1c0));
      fn_82637C50(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + -0x7ceab1b8));
      iVar1 = -0x7ceab1b4;
    }
    fn_82637CE0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar2 + iVar1));
    *(uint *)(param_1 + 0x20) = param_2;
  }
  return;
}

