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
extern int fn_82635FE8();
extern int fn_82930318();
extern int fn_82930358();
extern int fn_82937188();
extern int fn_82937A60();
extern int fn_8293C408();
extern unsigned int lbl_82031798;


void fn_8293D470(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)((param_3 + 0x18) * 4 + param_2);
  if (*(int *)(iVar1 + 0x10) == 0x12) {
    iVar1 = *(int *)(iVar1 + 0x18);
    fn_8293C408(param_1,1);
    uVar2 = fn_82635FE8();
    for (iVar3 = *(int *)(param_1 + 0x148); (iVar3 != 0 && (*(int *)(iVar3 + 0x14) != iVar1));
        iVar3 = *(int *)(iVar3 + 0xc)) {
    }
    if (iVar3 == 0) {
      iVar3 = fn_82937188(param_1,iVar1,0xffffffffffffffff);
    }
    puVar4 = (undefined4 *)fn_82930318(0x18);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      fn_82930358(puVar4);
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0xffffffff;
      *puVar4 = &lbl_82031798;
    }
    puVar4[4] = uVar2;
    puVar4[3] = *(undefined4 *)(iVar3 + 8);
    *(undefined4 **)(iVar3 + 8) = puVar4;
  }
  else {
    fn_82937A60(param_1,0xffffffff82033b3c);
  }
  return;
}

