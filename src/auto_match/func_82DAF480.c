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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82D02610();
extern int fn_82D839C0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


void fn_82DAF480(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar3;
  int *piVar4;
  undefined8 uVar2;
  char cVar5;
  
  iVar3 = fn_82D839C0();
  if (iVar3 != 0) {
    piVar4 = (int *)fn_82D839C0(param_1);
    uVar2 = (**(code **)(*piVar4 + 0xc))();
    iVar3 = fn_82CE5410();
    cVar5 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x24))(*(int **)(iVar3 + 0x10),uVar2);
    if (cVar5 == '\0') {
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar3 + 4);
      if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar1 = "TtWatchDog:FreeMem";
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
      }
      piVar4 = (int *)fn_82D839C0(param_1);
      (**(code **)(*piVar4 + 0x10))(piVar4,param_1);
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar3 + 4);
      if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
      }
    }
    if (lbl_8323B520 != 0) {
      fn_82D02610(0);
    }
  }
  return;
}

