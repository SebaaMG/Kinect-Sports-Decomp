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
extern int fn_82CE5410();
extern int fn_82CEA160();


void fn_82CF1428(uint *param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  while (param_1 < param_2) {
    uVar2 = *param_1;
    if (uVar2 < 10) {
switchD_82cf14a4_caseD_4e:
      param_1 = param_1 + 1;
    }
    else {
      iVar3 = fn_82CE5410();
      fn_82CEA160(param_3,*(undefined4 *)(iVar3 + 0x10),uVar2,uVar2);
      bVar1 = *(byte *)*param_1;
      if (bVar1 < 0x50) {
        if (bVar1 == 0x4f) {
switchD_82cf14a4_caseD_4c:
          uVar2 = param_1[3];
          iVar3 = fn_82CE5410();
          fn_82CEA160(param_3,*(undefined4 *)(iVar3 + 0x10),uVar2,uVar2);
          param_1 = param_1 + 4;
        }
        else {
          switch(bVar1) {
          case 0x45:
            goto switchD_82cf14a4_caseD_45;
          default:
            goto switchD_82f20fb0_default;
          case 0x4c:
            goto switchD_82cf14a4_caseD_4c;
          case 0x4d:
            param_1 = param_1 + 2;
            break;
          case 0x4e:
            goto switchD_82cf14a4_caseD_4e;
          }
        }
      }
      else {
        if (0x6c < bVar1) {
          if (bVar1 != 0x70) {
            return;
          }
          goto switchD_82cf14a4_caseD_4e;
        }
        if (bVar1 != 0x6c) {
          if (bVar1 == 0x50) goto switchD_82cf14a4_caseD_4e;
          if (bVar1 < 0x53) {
            return;
          }
          if (0x54 < bVar1) {
            return;
          }
        }
switchD_82cf14a4_caseD_45:
        param_1 = param_1 + 3;
      }
    }
  }
switchD_82f20fb0_default:
  return;
}

