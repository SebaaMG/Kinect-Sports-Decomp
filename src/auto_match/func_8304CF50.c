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
extern int fn_82FAB9C0();
extern int fn_83016C90();
extern int fn_8301A448();
extern int fn_8304CD90();
extern int fn_8304CE70();
extern unsigned int iStack_40;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642EC;
extern unsigned int uStack_3c;


undefined8 fn_8304CF50(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  struct { int first; uint second; } stack_pair_40;

  int *piStack_38;
  
  uVar2 = (uint)param_1[5] >> 8;
  if (uVar2 < 0xb021) {
    if (uVar2 == 0xb020) {
LAB_8304d030:
      fn_8304CD90(param_1,(ulonglong)lbl_832642EC + 4);
      fn_83016C90(&stack_pair_40.first,(ulonglong)lbl_832642EC + 0x24);
      if (piStack_38 == (int *)0x0) {
        return 1;
      }
      do {
        do {
          fn_8304CD90(param_1,*(undefined4 *)(piStack_38[2] + 4));
          piStack_38 = (int *)*piStack_38;
        } while (piStack_38 != (int *)0x0);
        do {
          stack_pair_40.second = stack_pair_40.second + 1;
          if (0xc0 < stack_pair_40.second) {
            if (piStack_38 == (int *)0x0) {
              return 1;
            }
            break;
          }
          piStack_38 = *(int **)(stack_pair_40.second * 4 + stack_pair_40.first);
        } while (piStack_38 == (int *)0x0);
      } while( true );
    }
    if (uVar2 < 0x9011) {
      if (uVar2 != 0x9010) {
        if (uVar2 < 0x7022) {
          if (uVar2 == 0x7021) goto LAB_8304d418;
          if (0x7010 < uVar2) {
            if (uVar2 == 0x7011) goto LAB_8304d1dc;
            if (uVar2 != 0x7020) {
              return 1;
            }
            goto LAB_8304d030;
          }
          if (uVar2 == 0x7010) goto LAB_8304d398;
          if (uVar2 == 0x6010) goto LAB_8304d338;
          if (uVar2 != 0x6011) {
            return 1;
          }
        }
        else {
          if (uVar2 < 0x8011) {
            if (uVar2 == 0x8010) {
LAB_8304d338:
              piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_1[4]);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*param_1 + 0x38))(param_1,piVar3);
                (**(code **)(*piVar3 + 8))(piVar3);
                return 1;
              }
              return 1;
            }
            if (uVar2 == 0x7040) goto LAB_8304d140;
            if (uVar2 != 0x7041) {
              return 1;
            }
            goto LAB_8304d4b8;
          }
          if (uVar2 != 0x8011) {
            return 1;
          }
        }
LAB_8304cfc4:
        piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_1[4]);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*param_1 + 0x34))(param_1,piVar3,*(undefined4 *)(param_2 + 0x34));
          (**(code **)(*piVar3 + 8))(piVar3);
          return 1;
        }
        return 1;
      }
LAB_8304d398:
      piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_1[4]);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*param_1 + 0x40))(param_1,piVar3);
        (**(code **)(*piVar3 + 8))(piVar3);
        return 1;
      }
      return 1;
    }
    if (uVar2 < 0x9042) {
      if (uVar2 == 0x9041) goto LAB_8304d4b8;
      if (0x9021 < uVar2) {
        if (uVar2 != 0x9040) {
          return 1;
        }
        goto LAB_8304d140;
      }
      if (uVar2 == 0x9021) goto LAB_8304d418;
      if (uVar2 != 0x9011) {
        if (uVar2 != 0x9020) {
          return 1;
        }
        goto LAB_8304d030;
      }
    }
    else {
      if (uVar2 < 0xb011) {
        if (uVar2 != 0xb010) {
          if (uVar2 == 0xa010) goto LAB_8304d338;
          if (uVar2 != 0xa011) {
            return 1;
          }
          goto LAB_8304cfc4;
        }
        goto LAB_8304d398;
      }
      if (uVar2 != 0xb011) {
        return 1;
      }
    }
LAB_8304d1dc:
    piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_1[4]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*param_1 + 0x3c))(param_1,piVar3,*(undefined4 *)(param_2 + 0x34));
      (**(code **)(*piVar3 + 8))(piVar3);
      return 1;
    }
    return 1;
  }
  if (uVar2 < 0xd041) {
    if (uVar2 != 0xd040) {
      if (0xc011 < uVar2) {
        if (0xd020 < uVar2) {
          if (uVar2 != 0xd021) {
            return 1;
          }
LAB_8304d418:
          puVar1 = *(undefined4 **)(*(int *)(param_2 + 0x34) + 4);
          if (puVar1 != (undefined4 *)0x0) {
            for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0;
                puVar1 = (undefined4 *)*puVar1) {
              piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,puVar1[1]);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*param_1 + 0x3c))(param_1,piVar3,*(undefined4 *)(param_2 + 0x34));
                (**(code **)(*piVar3 + 8))(piVar3);
              }
            }
            return 1;
          }
          return 1;
        }
        if (uVar2 != 0xd020) {
          if (uVar2 == 0xd010) goto LAB_8304d398;
          if (uVar2 != 0xd011) {
            return 1;
          }
          goto LAB_8304d1dc;
        }
        goto LAB_8304d030;
      }
      if (uVar2 == 0xc011) goto LAB_8304cfc4;
      if (0xb041 < uVar2) {
        if (uVar2 != 0xc010) {
          return 1;
        }
        goto LAB_8304d338;
      }
      if (uVar2 == 0xb041) goto LAB_8304d4b8;
      if (uVar2 == 0xb021) goto LAB_8304d418;
      if (uVar2 != 0xb040) {
        return 1;
      }
    }
LAB_8304d140:
    fn_8304CE70(param_1,(ulonglong)lbl_832642EC + 4);
    fn_83016C90(&stack_pair_40.first,(ulonglong)lbl_832642EC + 0x24);
    while (piStack_38 != (int *)0x0) {
      fn_8304CE70(param_1,*(undefined4 *)(piStack_38[2] + 4));
      fn_8301A448(&stack_pair_40.first);
    }
    return 1;
  }
  if (uVar2 < 0xf012) {
    if (uVar2 == 0xf011) goto LAB_8304d1dc;
    if (0xe011 < uVar2) {
      if (uVar2 != 0xf010) {
        return 1;
      }
      goto LAB_8304d398;
    }
    if (uVar2 == 0xe011) goto LAB_8304cfc4;
    if (uVar2 != 0xd041) {
      if (uVar2 != 0xe010) {
        return 1;
      }
      goto LAB_8304d338;
    }
  }
  else {
    if (uVar2 < 0xf041) {
      if (uVar2 != 0xf040) {
        if (uVar2 != 0xf020) {
          if (uVar2 != 0xf021) {
            return 1;
          }
          goto LAB_8304d418;
        }
        goto LAB_8304d030;
      }
      goto LAB_8304d140;
    }
    if (uVar2 != 0xf041) {
      return 1;
    }
  }
LAB_8304d4b8:
  puVar1 = *(undefined4 **)(*(int *)(param_2 + 0x34) + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,puVar1[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*param_1 + 0x48))(param_1,piVar3,*(undefined4 *)(param_2 + 0x34));
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return 1;
}

