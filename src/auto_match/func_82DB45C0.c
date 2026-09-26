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
extern int fn_82D92950();
extern int fn_82DB4770();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;


void fn_82DB45C0(int param_1,undefined8 param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "LtMaintenance";
    puVar1[3] = "StSplit";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  fn_82D92950(param_2);
  if (*(float *)(param_1 + 0xc) <= *param_3) {
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = "StResetTime";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
    fn_82DB4770(param_1,param_2,param_3);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

