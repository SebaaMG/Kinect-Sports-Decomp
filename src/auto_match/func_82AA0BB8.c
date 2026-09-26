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
extern int fn_82635A70();
extern int fn_82A29A38();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB74F8();


undefined8
fn_82AA0BB8(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4,char param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar1 = fn_82AB74F8();
  lVar2 = fn_82AB63F8();
  do {
    if (lVar2 == 0) {
      fn_82635A70(param_2,uVar4,uVar5);
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar4;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (int)uVar5;
      }
      return 0;
    }
    puVar3 = (undefined4 *)fn_82AB67A8(lVar2);
    switch(*puVar3) {
    case 0x7ba:
      if (param_5 != '\0') {
        fn_82A29A38();
      }
      uVar4 = uVar4 & 0xffffffc0 | puVar3[1] & 0x3f;
      break;
    case 0x7bb:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 0x3f) << 8 | uVar4 & 0xffffc0ff;
      break;
    case 0x7bc:
      if (param_5 != '\0') goto switchD_82aa0c2c_caseD_7c4;
      break;
    case 0x7bd:
      if (param_5 == '\0') goto switchD_82aa0c2c_caseD_7c4;
      break;
    case 0x7be:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 1) << 0x12 | uVar4 & 0xfffbffff;
      break;
    case 0x7bf:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 1) << 0x13 | uVar4 & 0xfff7ffff;
      break;
    case 0x7c0:
      if (param_5 != '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 0xf) << 0x14 | uVar4 & 0xff0fffff;
      break;
    case 0x7c1:
      if (param_5 != '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 7) << 0x18 | uVar4 & 0xf8ffffff;
      break;
    case 0x7c2:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar4 = (puVar3[1] & 0xf) << 0x1b | uVar4 & 0x87ffffff;
      break;
    case 0x7c3:
      if (param_5 != '\0') {
        fn_82A29A38();
      }
      uVar4 = puVar3[1] << 0x1f | uVar4 & 0x7fffffff;
      break;
    default:
switchD_82aa0c2c_caseD_7c4:
      fn_82A29A38();
      break;
    case 0x7c5:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar5 = ((ulonglong)(uint)puVar3[1] & 1) << 1 | uVar5 & 0xfffffffffffffffd;
      break;
    case 0x7c7:
      if (param_5 == '\0') {
        fn_82A29A38();
      }
      uVar5 = (ulonglong)*(byte *)((int)puVar3 + 7) << 8 | uVar5 << 0x20 | uVar5 & 0xffff00ff;
    }
    lVar2 = fn_82AB66F8(uVar1,lVar2);
  } while( true );
}

