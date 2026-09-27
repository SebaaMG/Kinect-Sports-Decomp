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
extern int fn_828EB518();
extern int fn_82A1E860();
extern unsigned int lbl_8218EFD4;
extern unsigned int lbl_82195654;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326B4BC;
extern unsigned int lbl_8326C390;
extern unsigned int uRam8326c394;
extern unsigned int uStack_3a;


void fn_82594108(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uStack_3a;
  
  uVar3 = lbl_821CC160;
  if ((*(uint *)(&lbl_8218EFD4 + param_1 * 4) & lbl_8326B4BC) != 0) {
    iVar7 = param_1 * 0x30;
    if (*(int *)(iVar7 + -0x7cd93d20) != 0) {
      if (lbl_8326C390 == 0) {
        *(undefined4 *)(iVar7 + -0x7cd93d10) = *(undefined4 *)(iVar7 + -0x7cd93d18);
        *(undefined4 *)(iVar7 + -0x7cd93d0c) = *(undefined4 *)(iVar7 + -0x7cd93d14);
      }
      else {
        *(undefined4 *)(iVar7 + -0x7cd93d10) = lbl_821CC160;
        *(undefined4 *)(iVar7 + -0x7cd93d0c) = uVar3;
      }
    }
    fVar2 = lbl_82195654;
    puVar6 = (undefined2 *)(iVar7 + -0x7cd93d08);
    fVar1 = *(float *)(iVar7 + -0x7cd93d0c) * lbl_82195654;
    *(undefined4 *)(iVar7 + -0x7cd93d14) = uVar3;
    *(undefined4 *)(iVar7 + -0x7cd93d18) = uVar3;
    *(undefined4 *)(iVar7 + -0x7cd93d20) = 1;
    uStack_3a = (undefined2)(longlong)fVar1;
    uVar4 = uStack_3a;
    uStack_3a = (undefined2)(longlong)(*(float *)(iVar7 + -0x7cd93d10) * fVar2);
    *puVar6 = uStack_3a;
    *(undefined2 *)(iVar7 + -0x7cd93d06) = uVar4;
    if (uRam8326c394 != 0) {
      iVar5 = lbl_83265988;
      if (param_1 != 0xff) {
        iVar5 = fn_828EB518(param_1);
      }
      if ((iVar5 != 0) &&
         (((uint)*(byte *)((uRam8326c394 >> 3) + *(int *)(*(int *)(iVar5 + 0xf4) + 8)) &
          1 << (uRam8326c394 & 7)) != 0)) {
        *puVar6 = 0;
        *(undefined2 *)(iVar7 + -0x7cd93d06) = 0;
      }
    }
    fn_82A1E860(param_1,puVar6);
  }
  return;
}

