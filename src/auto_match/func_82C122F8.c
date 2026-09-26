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
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C11EA8();
extern int fn_82C12198();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;


void fn_82C122F8(int param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte abStack_60 [4];
  int iStack_5c;
  undefined4 uStack_58;
  int aiStack_54 [21];
  
  *param_2 = 0;
  uStack_58 = 0;
  iStack_5c = 0;
  aiStack_54[0] = 0;
  bVar3 = false;
  iVar4 = fn_82C10F68(*(undefined4 *)(param_1 + 0x48),&uStack_58,&iStack_5c,abStack_60);
  if (iVar4 != -0x7fafffea) {
    if (iVar4 < 0) {
      return;
    }
    do {
      if (iVar4 < 0) {
        return;
      }
      uVar6 = 0;
      do {
        uVar1 = *(uint *)((uVar6 + 1) * 4 + iStack_5c);
        if (uVar1 != 0) {
          bVar3 = true;
          uVar2 = 1 << ((uint)abStack_60[0] + ((int)(uint)abStack_60[0] >> 5) * -0x20 & 0x3f);
          if (((uVar1 & *(uint *)((uVar6 + 0x14) * 4 + param_1)) != uVar1) ||
             ((*(uint *)(((abStack_60[0] >> 5) + 0x14) * 4 + param_1) & uVar2) == uVar2)) {
            bVar3 = false;
            goto LAB_82c12450;
          }
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      if (bVar3) {
        while (iVar4 = iStack_5c, iVar5 = fn_82C12198(param_1,iStack_5c,param_3,aiStack_54),
              iVar5 == 0) {
          if (aiStack_54[0] == 1) {
            *param_2 = abStack_60[0];
            break;
          }
          if ((aiStack_54[0] != 2) || (iVar4 = fn_82C11EA8(param_1,iVar4), iVar4 != 0)) break;
        }
      }
LAB_82c12450:;} while ((*param_2 != abStack_60[0]) &&
            (iVar4 = fn_82C10FD0(*(undefined4 *)(param_1 + 0x48),uStack_58,&iStack_5c,abStack_60),
            iVar4 != -0x7fafffea));
  }
  fn_82C11038(*(undefined4 *)(param_1 + 0x48),uStack_58);
  return;
}

