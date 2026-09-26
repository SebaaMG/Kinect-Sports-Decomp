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


void fn_82D03CE0(undefined1 *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      uVar1 = *param_3;
      puVar4 = (uint *)(uVar1 - 0x10);
      if ((uVar1 & 0xf) == 0) {
        if (uVar1 - 0x10 < *(uint *)(param_2 + 0xc)) {
          bVar2 = false;
        }
        else {
          uVar1 = *(uint *)(uVar1 - 0xc);
          if ((uVar1 >> 1 & 1) == 0) {
            bVar2 = false;
          }
          else if ((uVar1 & 0xfffffffc) < 0x10) {
            bVar2 = false;
          }
          else if ((*(uint *)((int)puVar4 + (uVar1 & 0xfffffffc) + 4) & 1) == 0) {
            bVar2 = false;
          }
          else if ((uVar1 & 1) == 0) {
            uVar1 = *(uint *)((int)puVar4 + (4 - *puVar4));
            if ((uVar1 >> 1 & 1) == 0) {
              bVar2 = false;
              if ((uVar1 & 0xfffffffc) == *puVar4) goto code_r0x82d03da0;
            }
            else {
              bVar2 = false;
            }
          }
          else {
code_r0x82d03da0:
            bVar2 = true;
          }
        }
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        *param_1 = 0;
        return;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return;
}

