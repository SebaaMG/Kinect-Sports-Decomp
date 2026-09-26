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
extern int fn_82D7E470();
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F841E8();


undefined8
fn_82F6E450(char *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,uint param_5,
             undefined1 *param_6,uint param_7,undefined1 *param_8)

{
  char cVar1;
  bool bVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar3;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  uint in_stack_00000054;
  
  bVar2 = false;
  if (param_1 != (char *)0x0) {
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 == 0) {
LAB_82f6e4ac:
        if (param_4 == (undefined1 *)0x0) {
          if (param_5 == 0) {
LAB_82f6e4c8:
            if (param_6 == (undefined1 *)0x0) {
              if (param_7 == 0) {
LAB_82f6e4e4:
                if (param_8 == (undefined1 *)0x0) {
                  if (in_stack_00000054 == 0) {
LAB_82f6e4f4:
                    lVar9 = 1;
                    pcVar7 = param_1;
                    do {
                      if (*pcVar7 == '\0') break;
                      pcVar7 = pcVar7 + 1;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                    if (*pcVar7 == ':') {
                      if (param_2 != (undefined1 *)0x0) {
                        if (param_3 < 3) goto LAB_82f6e688;
                        fn_82F841E8(param_2,0xffffffffffffffff,param_1,2);
                      }
                      param_1 = pcVar7 + 1;
                    }
                    else if (param_2 != (undefined1 *)0x0) {
                      *param_2 = 0;
                    }
                    pcVar8 = (char *)0x0;
                    pcVar6 = (char *)0x0;
                    pcVar7 = param_1;
                    if (*param_1 == '\0') {
LAB_82f6e60c:
                      pcVar8 = param_1;
                      if (param_4 != (undefined1 *)0x0) {
                        *param_4 = 0;
                      }
                    }
                    else {
                      do {
                        iVar4 = fn_82D7E470(*pcVar7);
                        if (iVar4 == 0) {
                          cVar1 = *pcVar7;
                          if ((cVar1 == '/') || (cVar1 == '\\')) {
                            pcVar8 = pcVar7 + 1;
                          }
                          else if (cVar1 == '.') {
                            pcVar6 = pcVar7;
                          }
                        }
                        else {
                          pcVar7 = pcVar7 + 1;
                        }
                        pcVar7 = pcVar7 + 1;
                      } while (*pcVar7 != '\0');
                      if (pcVar8 == (char *)0x0) goto LAB_82f6e60c;
                      if (param_4 != (undefined1 *)0x0) {
                        if (param_5 <= (uint)((int)pcVar8 - (int)param_1)) goto LAB_82f6e688;
                        fn_82F841E8(param_4,0xffffffffffffffff,param_1);
                      }
                    }
                    param_1 = pcVar8;
                    if ((pcVar6 == (char *)0x0) || (pcVar6 < param_1)) {
                      if (param_6 != (undefined1 *)0x0) {
                        if (param_7 <= (uint)((int)pcVar7 - (int)param_1)) goto LAB_82f6e688;
                        fn_82F841E8(param_6,0xffffffffffffffff,param_1);
                      }
                      if (param_8 != (undefined1 *)0x0) {
                        *param_8 = 0;
                      }
                      return 0;
                    }
                    if (param_6 != (undefined1 *)0x0) {
                      if (param_7 <= (uint)((int)pcVar6 - (int)param_1)) goto LAB_82f6e688;
                      fn_82F841E8(param_6,0xffffffffffffffff,param_1);
                    }
                    if (param_8 == (undefined1 *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)pcVar7 - (int)pcVar6) < in_stack_00000054) {
                      fn_82F841E8(param_8,0xffffffffffffffff,pcVar6);
                      return 0;
                    }
                    goto LAB_82f6e688;
                  }
                }
                else if (in_stack_00000054 != 0) goto LAB_82f6e4f4;
              }
            }
            else if (param_7 != 0) goto LAB_82f6e4e4;
          }
        }
        else if (param_5 != 0) goto LAB_82f6e4c8;
      }
    }
    else if (param_3 != 0) goto LAB_82f6e4ac;
  }
  bVar2 = true;
LAB_82f6e688:
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    *param_2 = 0;
  }
  if ((param_4 != (undefined1 *)0x0) && (param_5 != 0)) {
    *param_4 = 0;
  }
  if ((param_6 != (undefined1 *)0x0) && (param_7 != 0)) {
    *param_6 = 0;
  }
  if ((param_8 != (undefined1 *)0x0) && (in_stack_00000054 != 0)) {
    *param_8 = 0;
  }
  if ((param_1 == (char *)0x0) || (bVar2)) {
    puVar5 = (undefined4 *)fn_82F68240();
    *puVar5 = 0x16;
    fn_82F63BA0();
    uVar3 = 0x16;
  }
  else {
    puVar5 = (undefined4 *)fn_82F68240();
    uVar3 = 0x22;
    *puVar5 = 0x22;
  }
  return uVar3;
}

