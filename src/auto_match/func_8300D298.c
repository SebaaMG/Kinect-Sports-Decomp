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
extern int fn_82FEFD50();
extern int fn_83022188();
extern int fn_830221F8();
extern int fn_83027B20();
extern unsigned int lbl_82186E6C;


void fn_8300D298(int param_1)

{
  int iVar1;
  char cVar3;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xfc) + 8);
  }
  iVar1 = fn_82FEFD50(uVar2);
  if (((lbl_82186E6C < *(float *)(iVar1 + 0xc)) && (**(int **)(param_1 + 0x3a0) != 0)) &&
     ((*(int *)(iVar1 + 0x14) != 0 || (cVar3 = fn_83027B20(), cVar3 != '\0')))) {
    fn_830221F8((double)*(float *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x14));
    fn_83022188(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x3a0));
  }
  return;
}

