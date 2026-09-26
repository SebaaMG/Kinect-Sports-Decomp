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
extern int fn_825500E8();
extern int fn_82550A28();
extern int fn_82550B38();
extern int fn_82551020();


undefined4 * fn_825505D0(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  int *apiStack_50 [2];
  undefined1 auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (*(float *)(param_4 + 0xc) <= (float)param_3[3]) goto LAB_8255077c;
        uVar5 = 0;
      }
      else {
        dVar7 = (double)*(float *)(param_4 + 0xc);
        dVar6 = (double)(float)param_3[3];
        if ((dVar6 <= dVar7) ||
           (apiStack_50[0] = param_3, piVar3 = (int *)fn_82551020(apiStack_50),
           dVar7 <= (double)*(float *)(*piVar3 + 0xc))) {
          if ((dVar7 <= dVar6) ||
             ((apiStack_50[0] = param_3, puVar4 = (undefined4 *)fn_825500E8(apiStack_50),
              (int *)*puVar4 != piVar2 && ((double)(float)apiStack_50[0][3] <= dVar7))))
          goto LAB_8255077c;
          cVar1 = *(char *)(param_3[2] + 0x29);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        else {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x29);
          piVar2 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_8255061c;
    }
    if ((float)param_3[3] <= *(float *)(param_4 + 0xc)) {
LAB_8255077c:
      puVar4 = (undefined4 *)fn_82550A28(auStack_48,param_2,param_4);
      *param_1 = *puVar4;
      return param_1;
    }
  }
  uVar5 = 1;
LAB_8255061c:
  fn_82550B38(param_1,param_2,uVar5,param_3,param_4);
  return param_1;
}

