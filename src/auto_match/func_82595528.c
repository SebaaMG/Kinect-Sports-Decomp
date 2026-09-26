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
extern unsigned int *auStack_48;
extern int fn_82381BC0();
extern int fn_82595690();
extern int fn_82595788();
extern int fn_82829C48();
extern int iRam8329700c;
extern unsigned int *lbl_83297008;


undefined4 * fn_82595528(undefined4 *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int *apiStack_50 [2];
  undefined1 auStack_48 [72];
  
  piVar4 = lbl_83297008;
  apiStack_50[0] = (int *)0x0;
  piVar8 = lbl_83297008;
  if (iRam8329700c != 0) {
    piVar8 = param_2;
    if (param_2 != (int *)*lbl_83297008) {
      if (param_2 == lbl_83297008) {
        piVar8 = (int *)lbl_83297008[2];
        if (*(uint *)(param_3 + 0xc) <= (uint)piVar8[3]) goto LAB_8259566c;
        uVar7 = 0;
      }
      else {
        uVar2 = *(uint *)(param_3 + 0xc);
        uVar3 = param_2[3];
        if ((uVar2 < uVar3) &&
           (apiStack_50[0] = param_2, piVar5 = (int *)fn_82829C48(apiStack_50),
           *(uint *)(*piVar5 + 0xc) < uVar2)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x15);
          param_2 = apiStack_50[0];
        }
        else {
          if ((uVar2 <= uVar3) ||
             ((apiStack_50[0] = param_2, puVar6 = (undefined4 *)fn_82381BC0(apiStack_50),
              (int *)*puVar6 != piVar4 && ((uint)apiStack_50[0][3] <= uVar2)))) goto LAB_8259566c;
          cVar1 = *(char *)(param_2[2] + 0x15);
          piVar8 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          piVar8 = param_2;
        }
      }
      goto LAB_8259556c;
    }
    if ((uint)param_2[3] <= *(uint *)(param_3 + 0xc)) {
LAB_8259566c:
      puVar6 = (undefined4 *)fn_82595690(auStack_48,param_3);
      *param_1 = *puVar6;
      return param_1;
    }
  }
  uVar7 = 1;
LAB_8259556c:
  fn_82595788(param_1,uVar7,piVar8,param_3);
  return param_1;
}

