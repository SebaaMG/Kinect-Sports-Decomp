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
extern unsigned int *auStack_70;
extern int fn_829D4C60();
extern int fn_829D5BF8();
extern int fn_829D5E60();
extern int fn_829D6960();
extern int fn_829DA960();
extern int fn_82A94368();
extern unsigned int lbl_83217170;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


longlong fn_829D6A90(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uStack_80;
  uint uStack_7c;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  uint uStack_5c;
  
  switch(param_1) {
  case 0x2c002:
    return 0;
  default:
    DbgPrint(0xffffffff82057544,param_1);
    return -0x7fff0001;
  case 0x2c006:
    uVar3 = (ulonglong)param_2[2];
    if ((param_2[2] & 1) == 0) {
      uVar3 = uVar3 | 1;
    }
    uVar4 = param_2[1];
    uVar3 = uVar3 | 0x80000000;
    uVar2 = 2;
    goto code_r0x829d6b04;
  case 0x2c007:
    uVar3 = 0xffffffff80000000;
    uVar4 = 0;
    uVar2 = 1;
    goto code_r0x829d6b04;
  case 0x2c008:
    uVar3 = 0xffffffff80000000;
    uVar4 = 0;
    uVar2 = 6;
code_r0x829d6b04:
    lVar5 = fn_829D5BF8(uVar2,*param_2,uVar4,uVar3);
    return lVar5;
  case 0x2c00a:
    lVar5 = 0;
    uVar4 = *(uint *)(lbl_832179FC + 0x8f048);
    break;
  case 0x2c00b:
    *(undefined4 *)(lbl_832179FC + 0x8f4fc) = 1;
    sync(0);
    return 0;
  case 0x2c00e:
    lVar5 = fn_829D5E60(*param_2);
    return lVar5;
  case 0x2c00f:
    fn_829D6960();
    return 0;
  case 0x2c011:
    lVar5 = -0x7fff0001;
    if (0x17 < *param_2) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      iVar1 = lbl_83217170;
      if (lbl_83217170 != 0) {
        fn_82A94368(lbl_83217170 + 0x30,0,auStack_70);
        lVar5 = 0;
        param_2[1] = uStack_6c;
        param_2[2] = uStack_68;
        param_2[3] = uStack_60;
        param_2[4] = uStack_5c;
        param_2[5] = *(uint *)(iVar1 + 100);
      }
      RtlLeaveCriticalSection(0xffffffff8315c428);
    }
    uVar4 = 0x18;
    break;
  case 0x2c012:
    lVar5 = -0x7fff0001;
    if (7 < *param_2) {
      lVar5 = fn_829D4C60(param_2[1],1);
    }
    uVar4 = 8;
    break;
  case 0x2c013:
    lVar5 = -0x7fff0001;
    if ((0xf < *param_2) && (lVar5 = fn_829DA960(param_2[1],&uStack_80), -1 < lVar5)) {
      param_2[2] = uStack_80;
      param_2[3] = uStack_7c;
    }
    uVar4 = 0x10;
  }
  *param_2 = uVar4;
  return lVar5;
}

