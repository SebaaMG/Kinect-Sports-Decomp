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
extern unsigned int *auStack_410;
extern unsigned int *auStack_41c;
extern int fn_82278950();
extern int fn_82289670();
extern int fn_8228A728();
extern int fn_8229E090();
extern int fn_82484768();
extern unsigned int uStack_420;


void fn_8228AEA0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack_420;
  undefined4 auStack_41c [3];
  undefined1 auStack_410 [1040];
  
  if (param_1 == 2) {
    *(undefined4 *)(param_2 + 0x11f8) = 0;
  }
  else {
    if (param_1 == 0) {
      auStack_41c[0] = *(undefined4 *)(*(int *)(param_2 + 0x740) + 0x8c4);
      uStack_420 = *(undefined4 *)(*(int *)(param_2 + 0x740) + 0x8c8);
      fn_82289670(param_2,2);
      iVar1 = *(int *)(param_2 + 0x64c);
      *(undefined4 *)(param_2 + 0x728) = 4;
      *(undefined4 *)(iVar1 + 0xb4) = 0;
      fn_82278950(*(undefined4 *)(iVar1 + 0xb0));
      *(undefined4 *)(param_2 + 0x768) = 4;
      uVar2 = fn_82484768(*(undefined4 *)(param_2 + 0x11f0));
      fn_8228A728(auStack_410,param_2,2,uVar2,auStack_41c,&uStack_420);
      uVar3 = 7;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(param_2 + 0x604) = uVar3;
    fn_8229E090(*(undefined4 *)(param_2 + 0x11f8),0,1);
    *(undefined4 *)(param_2 + 0x11f8) = 0;
  }
  return;
}

