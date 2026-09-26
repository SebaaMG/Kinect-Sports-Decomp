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
extern int fn_82DBBD28();
extern int fn_82DBBF60();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DBB890(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtDsblConstr";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  iVar3 = fn_82DBBD28(param_1,0x1b);
  if (iVar3 == 0) {
    iVar3 = fn_82CE5410();
    puVar4 = (undefined2 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x20)
    ;
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      *puVar4 = 0x1b;
      puVar4[8] = 0x20;
    }
    fn_82DBBF60(param_1,param_2,puVar4);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

