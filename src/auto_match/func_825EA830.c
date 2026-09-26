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
extern int fn_8257D088();
extern int fn_825C7348();
extern int fn_82623298();
extern int fn_82623338();
extern unsigned int lbl_83282290;


void fn_825EA830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = *(undefined4 **)((*(uint *)(iVar1 + 0xaf0) % 3 + 9) * 4 + param_1);
  uVar2 = *puVar3;
  fn_825C7348(1);
  uVar4 = fn_825C7348(0);
  fn_82623298(puVar3,uVar4);
  if (*(int *)(iVar1 + 0xbe0) != 0) {
    fn_8257D088((int)*(float *)(iVar1 + 0xc70),(int)*(float *)(iVar1 + 0xc74),
                      (int)*(float *)(iVar1 + 0xc78),(int)*(float *)(iVar1 + 0xc7c),
                      (int)*(float *)(iVar1 + 0xc80),lbl_83282290,uVar2);
  }
  fn_82623338(puVar3);
  return;
}

