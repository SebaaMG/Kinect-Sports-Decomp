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
extern int fn_828F9E30();
extern int fn_828FA0E0();
extern int fn_828FA220();
extern int fn_828FA3B0();
extern int fn_828FA428();
extern int fn_828FB0B0();
extern int fn_828FB1A0();
extern int fn_828FB270();
extern int fn_828FB560();
extern int fn_828FB6C0();
extern int fn_828FB8D0();
extern int fn_828FB948();
extern int fn_82F66A40();


undefined8 fn_828FBB60(uint *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  
  param_1[10] = param_2;
  lVar6 = 0;
  param_3[4] = param_1[6];
  param_3[5] = param_1[7];
  iVar4 = fn_828FB6C0();
  if (iVar4 == 0) {
    param_3[4] = param_1[6];
    param_3[5] = param_1[7];
    pcVar2 = (char *)*param_1;
    if (pcVar2 < (char *)param_1[1]) {
      cVar1 = *pcVar2;
      if ((('/' < cVar1) && (cVar1 < ':')) || (cVar1 == '.')) {
        if (param_1[0xd] != 0) {
          if ((param_1[10] & 4) == 0) goto LAB_828fbce0;
        }
        piVar7 = param_3 + 2;
        lVar6 = fn_828F9E30(param_1,pcVar2,piVar7);
        if (lVar6 == 0) {
          lVar6 = fn_828FB0B0(param_1,*param_1,piVar7);
          if (lVar6 == 0) {
            lVar6 = fn_828FB1A0(param_1,*param_1,piVar7);
            if (lVar6 == 0) {
              lVar6 = fn_828FB270(param_1,*param_1,piVar7);
              if (lVar6 != 0) {
                *param_3 = 3;
                iVar4 = fn_828FA428(param_1,(ulonglong)*param_1 + lVar6,param_3);
                iVar4 = iVar4 + (int)lVar6;
                goto LAB_828fbe0c;
              }
              goto LAB_828fbdf0;
            }
            *param_3 = 4;
            if (*piVar7 == 0) {
              uVar5 = 3;
              goto LAB_828fbc84;
            }
          }
          else {
            uVar5 = 4;
LAB_828fbc84:
            *param_3 = uVar5;
          }
          iVar4 = fn_828FA428(param_1,(ulonglong)*param_1 + lVar6,param_3);
        }
        else {
          *param_3 = 5;
          iVar4 = fn_828FA3B0(param_1,(ulonglong)*param_1 + lVar6,param_3);
        }
        iVar4 = iVar4 + (int)lVar6;
        goto LAB_828fbe0c;
      }
LAB_828fbce0:
      if (cVar1 == '\'') {
        lVar6 = fn_828FB8D0(param_1,pcVar2,param_3 + 2);
        if (lVar6 != 0) {
          uVar5 = 4;
          goto LAB_828fbe08;
        }
      }
      else if (cVar1 == '\"') {
        lVar6 = fn_828FB948(param_1,pcVar2,param_3 + 2);
        if (lVar6 != 0) {
          uVar5 = 10;
          goto LAB_828fbe08;
        }
      }
      else if (((param_1[10] & 4) == 0) || (cVar1 != '<')) {
        iVar4 = fn_82F66A40(cVar1);
        if (((iVar4 != 0) || (cVar1 = *(char *)*param_1, cVar1 == '_')) ||
           ((((param_1[0xd] != 0 && ((param_1[10] & 4) == 0)) && ('/' < cVar1)) && (cVar1 < ':'))))
        {
          if ((param_1[10] & 2) != 0) {
            lVar6 = fn_828FB560(param_1,*param_1,param_3 + 2);
            if (lVar6 != 0) {
              uVar5 = 0;
              goto LAB_828fbe08;
            }
          }
          lVar6 = fn_828FA0E0(param_1,*param_1,param_3 + 2);
          if (lVar6 != 0) {
            uVar5 = 9;
            goto LAB_828fbe08;
          }
        }
      }
      else {
        lVar6 = fn_828FB948(param_1,pcVar2,param_3 + 2);
        if (lVar6 != 0) {
          uVar5 = 0xb;
          goto LAB_828fbe08;
        }
      }
LAB_828fbdf0:
      lVar6 = fn_828FA220(param_1,*param_1,param_3 + 2);
      uVar5 = 1;
    }
    else {
      uVar5 = 0xd;
    }
  }
  else {
    uVar5 = 0xc;
  }
LAB_828fbe08:
  iVar4 = (int)lVar6;
  *param_3 = uVar5;
LAB_828fbe0c:
  uVar3 = *param_1;
  param_3[7] = iVar4;
  param_3[6] = uVar3;
  *param_1 = *param_1 + iVar4;
  return 0;
}

