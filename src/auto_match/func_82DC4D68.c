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
extern int fn_82CE8E78();
extern int fn_82DBA1E0();
extern int fn_82DBDD58();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;


void fn_82DC4D68(uint *param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar4 + 4);
  if (puVar2 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar2 = "LtIntegrate";
    puVar2[3] = "StIntegrateMotions";
    uVar3 = TBLr;
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar2 + 4;
  }
  uVar1 = *(undefined2 *)(param_3 + 0x34);
  lVar6 = (ulonglong)*(uint *)(*(int *)(param_3 + 0x18) + 0x50) +
          (ulonglong)*(ushort *)(param_3 + 0x36) * 4;
  uVar5 = fn_82DBDD58((ulonglong)*param_1 + 0x1e0,(ulonglong)*param_1 + 0x1d0,
                            ((ulonglong)*(ushort *)(param_3 + 0x36) + 1) * 0x80 +
                            (ulonglong)*(uint *)(*(int *)(param_3 + 0x18) + 0x30),lVar6,uVar1,0xe0);
  *(undefined4 *)(param_3 + 0x38) = uVar5;
  fn_82DBA1E0(*(undefined4 *)(*param_1 + 0x78),lVar6,uVar1);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar4 + 4);
  if (puVar2 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar2 = &lbl_8202CF7C;
    uVar3 = TBLr;
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar2 + 3;
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

