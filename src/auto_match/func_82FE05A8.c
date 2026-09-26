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
extern int fn_82FDF660();
extern int fn_82FE4408();
extern unsigned int lbl_8217510C;
extern unsigned int lbl_82175110;
extern unsigned int lbl_82175114;
extern unsigned int lbl_82175118;


undefined8 fn_82FE05A8(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  
  uVar1 = 1;
  iVar4 = *(int *)(param_1 + 0x134);
  if (*(char *)(param_1 + 0xd0) != '\0') {
    iVar3 = (**(code **)(*param_2 + 4))(param_2,0x314);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82FDF660();
    }
    *(int *)(param_1 + 0xdc) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0x34;
    }
    else {
      iVar4 = iVar4 * 0x14;
      uVar1 = fn_82FE4408((double)*(float *)(param_1 + 0x13c),uVar2,param_2,0xffffffff82175114
                                ,*(undefined4 *)(&lbl_82175110 + iVar4),
                                *(undefined4 *)(&lbl_82175118 + iVar4),
                                *(undefined4 *)(&lbl_8217510C + iVar4),
                                *(undefined4 *)(&lbl_82175114 + iVar4),
                                *(undefined4 *)(param_1 + 200));
    }
  }
  return uVar1;
}

