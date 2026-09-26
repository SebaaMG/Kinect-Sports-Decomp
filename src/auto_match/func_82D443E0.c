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
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82138628;
extern unsigned int lbl_8323B4A0;


char * fn_82D443E0(char *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82138628;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  (**(code **)(**(int **)(param_2 + 0x18) + 0x20))
            (param_1,*(int **)(param_2 + 0x18),param_3,param_4);
  iVar3 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar3 + -1;
  if (*param_1 != '\0') {
    *(undefined4 *)((iVar3 + 7) * 4 + param_4) = 0;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

