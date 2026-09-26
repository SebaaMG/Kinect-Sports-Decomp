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
extern int fn_8289DD28();
extern int fn_828E5F60();
extern int fn_828E7D48();
extern int fn_828E8548();


undefined4 * fn_828E8728(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *apiStack_40 [16];
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_828E7D48(param_1,param_2,1,*(undefined4 *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar2) {
    if ((*(uint *)(param_4 + 0xc) < (uint)param_3[3]) ||
       ((*(uint *)(param_4 + 0xc) <= (uint)param_3[3] &&
        (*(uint *)(param_4 + 0x10) < (uint)param_3[4])))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      fn_828E7D48(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 == piVar2) {
      iVar3 = piVar2[2];
      if ((*(uint *)(iVar3 + 0xc) < *(uint *)(param_4 + 0xc)) ||
         ((*(uint *)(iVar3 + 0xc) <= *(uint *)(param_4 + 0xc) &&
          (*(uint *)(iVar3 + 0x10) < *(uint *)(param_4 + 0x10))))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        fn_828E7D48(param_1,param_2,0,iVar3,param_4);
        return param_1;
      }
      goto LAB_828e89b8;
    }
    uVar4 = *(uint *)(param_4 + 0xc);
    if ((uVar4 < (uint)param_3[3]) ||
       ((uVar4 <= (uint)param_3[3] && (*(uint *)(param_4 + 0x10) < (uint)param_3[4])))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      apiStack_40[0] = param_3;
      fn_8289DD28(apiStack_40);
      if (((uint)apiStack_40[0][3] < uVar4) ||
         (((uint)apiStack_40[0][3] <= uVar4 && ((uint)apiStack_40[0][4] < *(uint *)(param_4 + 0x10))
          ))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        cVar1 = *(char *)(apiStack_40[0][2] + 0x1d);
        piVar2 = apiStack_40[0];
        goto joined_r0x828e899c;
      }
    }
    if (((uint)param_3[3] < uVar4) ||
       (((uint)param_3[3] <= uVar4 && ((uint)param_3[4] < *(uint *)(param_4 + 0x10))))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      apiStack_40[0] = param_3;
      fn_828E5F60(apiStack_40);
      if (apiStack_40[0] != piVar2) {
        if ((uVar4 < (uint)apiStack_40[0][3]) ||
           ((uVar4 <= (uint)apiStack_40[0][3] &&
            (*(uint *)(param_4 + 0x10) < (uint)apiStack_40[0][4])))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_828e89b8;
      }
      cVar1 = *(char *)(param_3[2] + 0x1d);
      piVar2 = param_3;
      param_3 = apiStack_40[0];
joined_r0x828e899c:
      if (cVar1 == '\0') {
        fn_828E7D48(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
      fn_828E7D48(param_1,param_2,0,piVar2,param_4);
      return param_1;
    }
  }
LAB_828e89b8:
  puVar6 = (undefined4 *)fn_828E8548(apiStack_40,param_2,param_4,0);
  *param_1 = *puVar6;
  return param_1;
}

