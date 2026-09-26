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
extern unsigned int *auStack_90;
extern int fn_829C9BB0();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156B4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156CC;
extern unsigned int uStack_34;
extern unsigned int uStack_7c;


ulonglong fn_829C7DE0(int param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 auStack_90 [5];
  undefined4 uStack_7c;
  undefined4 uStack_34;
  
  uVar3 = 0;
  if (param_2 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (((param_4 != (undefined4 *)0x0) && (*param_4 = 0, param_1 == 0)) && ((uint)param_3 < 4)) {
      bVar1 = (uint)param_3 != 0;
      if (param_3 == 1 && bVar1) {
        iVar4 = *(int *)(&lbl_832156B4 + param_2 * 0x184);
        if (iVar4 != 1) {
          if (iVar4 != 2) {
            if (iVar4 != 3) {
              return 0xffffffff8000ffff;
            }
            goto LAB_829c7ef4;
          }
          goto LAB_829c7ed8;
        }
      }
      else {
        if (param_3 != 2 || !bVar1) {
          if (!bVar1) {
            *param_4 = *(undefined4 *)(&lbl_832156C8 + param_2 * 0x184);
            return uVar3;
          }
          uStack_7c = 0;
          auStack_90[0] = 0x24;
          iVar4 = fn_829C9BB0(auStack_90);
          if (-1 < iVar4) {
            *param_4 = uStack_34;
          }
          uVar3 = RtlNtStatusToDosError();
          if ((int)uVar3 < 1) {
            return uVar3;
          }
          return uVar3 & 0xffff | 0x80070000;
        }
        uVar2 = *(uint *)(&lbl_832156CC + param_2 * 0x184);
        if (3 < uVar2) {
          return 0xffffffff8000ffff;
        }
        if (uVar2 == 1) {
          *param_4 = 3;
          return uVar3;
        }
        if (uVar2 == 2) {
LAB_829c7ed8:
          *param_4 = 1;
          return uVar3;
        }
        if (uVar2 != 0) {
LAB_829c7ef4:
          *param_4 = 2;
          return uVar3;
        }
      }
      *param_4 = 0;
      return uVar3;
    }
  }
  return 0xffffffff80070057;
}

