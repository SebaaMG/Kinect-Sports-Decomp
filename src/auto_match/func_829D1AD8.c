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
extern int fn_829D0440();
extern int fn_829D10B0();
extern int fn_829D1718();
extern int fn_82F691F0();
extern int fn_831429CC();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int lbl_8315C428;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83217128;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a0;


/* WARNING: Removing unreachable block (ram,0x829d1f80) */
/* WARNING: Removing unreachable block (ram,0x829d2034) */
/* WARNING: Removing unreachable block (ram,0x829d1fa8) */
/* WARNING: Removing unreachable block (ram,0x829d1fd8) */
/* WARNING: Removing unreachable block (ram,0x829d20d4) */
/* WARNING: Removing unreachable block (ram,0x829d1fe0) */
/* WARNING: Removing unreachable block (ram,0x829d205c) */
/* WARNING: Removing unreachable block (ram,0x829d209c) */
/* WARNING: Removing unreachable block (ram,0x829d2068) */
/* WARNING: Removing unreachable block (ram,0x829d1ffc) */
/* WARNING: Removing unreachable block (ram,0x829d2120) */
/* WARNING: Removing unreachable block (ram,0x829d2138) */
/* WARNING: Removing unreachable block (ram,0x829d2144) */
/* WARNING: Removing unreachable block (ram,0x829d2148) */
/* WARNING: Removing unreachable block (ram,0x829d2160) */
/* WARNING: Removing unreachable block (ram,0x829d2174) */
/* WARNING: Removing unreachable block (ram,0x829d217c) */
/* WARNING: Removing unreachable block (ram,0x829d21b0) */
/* WARNING: Removing unreachable block (ram,0x829d225c) */
/* WARNING: Removing unreachable block (ram,0x829d21b8) */
/* WARNING: Removing unreachable block (ram,0x829d2208) */
/* WARNING: Removing unreachable block (ram,0x829d2238) */
/* WARNING: Removing unreachable block (ram,0x829d2214) */
/* WARNING: Removing unreachable block (ram,0x829d21e0) */
/* WARNING: Removing unreachable block (ram,0x829d22a4) */
/* WARNING: Removing unreachable block (ram,0x829d22f8) */
/* WARNING: Removing unreachable block (ram,0x829d2308) */
/* WARNING: Removing unreachable block (ram,0x829d231c) */
/* WARNING: Removing unreachable block (ram,0x829d2314) */
/* WARNING: Removing unreachable block (ram,0x829d2324) */
/* WARNING: Removing unreachable block (ram,0x829d2330) */
/* WARNING: Removing unreachable block (ram,0x829d2348) */
/* WARNING: Removing unreachable block (ram,0x829d2360) */

undefined8
fn_829D1AD8(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5,
             ulonglong param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iStack00000014;
  int iStack0000001c;
  undefined4 uStack0000003c;
  undefined4 uStack_a0;
  undefined *puStack_9c;
  
  iStack0000001c = (int)param_2;
  uStack0000003c = (undefined4)param_6;
  if ((param_6 & 0xffffffff) == 0) {
    return 0xffffffff80070057;
  }
  if ((param_4 & 0xffffffff) == 0) {
    return 0xffffffff80070057;
  }
  if (0x30 < (param_4 & 0xffffffff)) {
    return 0xffffffff80070057;
  }
  if (param_1 == 0) {
    if ((lbl_83215000 & 1) == 0) {
      return 0xffffffff83010005;
    }
LAB_829d1c04:
    if (((param_3 & 0xfffeffff) == 0) && (iStack0000001c == 1)) {
      iVar2 = 0;
      goto LAB_829d1d88;
    }
  }
  else {
    if (param_1 == 1) {
      if ((lbl_83215000 & 0x42) == 0) {
        return 0xffffffff83010005;
      }
      if ((param_3 & 0xfffeffff) != 0) {
        return 0xffffffff80070057;
      }
      iVar2 = 2;
    }
    else {
      if (param_1 != 2) {
        if (param_1 != 3) {
          if (param_1 == 4) {
            if ((lbl_83215000 & 1) == 0) {
              return 0xffffffff83010005;
            }
          }
          else {
            if (param_1 != 5) {
              if (param_1 == 6) {
                if ((lbl_83215000 & 0x42) == 0) {
                  return 0xffffffff83010005;
                }
                if ((param_3 & 0xfffeffff) != 0) {
                  return 0xffffffff80070057;
                }
                if (iStack0000001c == 1) {
                  return 0xffffffff80004001;
                }
                if (iStack0000001c != 2) {
                  return 0xffffffff80070057;
                }
                iVar2 = 3;
              }
              else {
                if (param_1 == 7) {
                  if ((lbl_83215000 & 1) == 0) {
                    return 0xffffffff83010005;
                  }
                  if ((param_3 & 0xfffeffff) != 0) {
                    return 0xffffffff80070057;
                  }
                  if (iStack0000001c != 0) {
                    return 0xffffffff80070057;
                  }
                }
                else {
                  if (param_1 != 8) {
                    return 0xffffffff80070057;
                  }
                  if ((lbl_83215000 & 0x20) == 0) {
                    return 0xffffffff83010005;
                  }
                  if ((param_3 & 0xfffeffff) != 0) {
                    return 0xffffffff80070057;
                  }
                  if (iStack0000001c != 0) {
                    return 0xffffffff80070057;
                  }
                  if (lbl_83215008 == 0) {
                    return 0xffffffff80070057;
                  }
                }
                iVar2 = 4;
              }
              goto LAB_829d1d88;
            }
            if ((lbl_83215000 & 0x20) == 0) {
              return 0xffffffff83010005;
            }
          }
          if ((param_3 & 0xfffeffff) != 0) {
            return 0xffffffff80070057;
          }
          if (iStack0000001c != 1) {
            return 0xffffffff80070057;
          }
          iVar2 = 1;
          goto LAB_829d1d88;
        }
        if ((lbl_83215000 & 0x20) == 0) {
          return 0xffffffff83010005;
        }
        goto LAB_829d1c04;
      }
      if ((lbl_83215000 & 0x42) == 0) {
        return 0xffffffff83010005;
      }
      if ((param_3 & 0xfffeffff) != 0) {
        return 0xffffffff80070057;
      }
      iVar2 = 5;
    }
    if (iStack0000001c == 2) {
LAB_829d1d88:
      puStack_9c = &lbl_8315C428;
      iStack00000014 = param_1;
      RtlEnterCriticalSection();
      if (iVar2 == 0) {
        if (lbl_83215008 != 0) {
          uVar1 = fn_829D10B0(param_2,param_3,param_4,param_5,param_6);
          RtlLeaveCriticalSection(puStack_9c);
          return uVar1;
        }
      }
      else if ((iVar2 == 4) && ((lbl_83215000 & 0x80000000) == 0)) {
        uVar1 = fn_829D1718(param_2,param_3,param_4,param_5,param_6);
        RtlLeaveCriticalSection(puStack_9c);
        return uVar1;
      }
      if ((&lbl_83217128)[iVar2] != 0) {
        RtlLeaveCriticalSection(puStack_9c);
        return 0xffffffff83010003;
      }
      uStack_a0 = 0;
      iVar2 = fn_831429CC(0xffffffff8315c408,0,0x7c,&uStack_a0);
      if (-1 < iVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uStack_a0,0,0x7c);
      }
      fn_829D0440(uStack_a0,0);
      ObDereferenceObject(uStack_a0);
      RtlLeaveCriticalSection(puStack_9c);
      return 0xffffffff8007000e;
    }
  }
  return 0xffffffff80070057;
}

