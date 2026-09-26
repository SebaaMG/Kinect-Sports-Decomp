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
extern int fn_82F63CA0();
extern int fn_82F812C0();
extern int fn_82F86A50();


int fn_82F80708(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 8) != '\0')) &&
     ((param_3[2] != 0 || ((*param_3 & 0x80000000) != 0)))) {
    if ((*param_3 & 0x80000000) == 0) {
      param_2 = (int *)(param_3[2] + (int)param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (param_4[6] == 0) {
          iVar2 = fn_82F86A50(uVar1,1);
          if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
            iVar2 = param_4[2] + *(int *)(param_1 + 0x18);
            if (-1 < (int)param_4[3]) {
              iVar2 = param_4[3] +
                      *(int *)(*(int *)(param_4[3] + *(int *)(param_1 + 0x18)) + param_4[4]) + iVar2
              ;
            }
            fn_82F63CA0(param_2,iVar2,param_4[5]);
            return 0;
          }
        }
        else {
          iVar2 = fn_82F86A50(uVar1,1);
          if (((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) &&
             (iVar2 = fn_82F86A50(param_4[6]), iVar2 != 0)) {
            return ((uint)LZCOUNT(*param_4 & 4) >> 5 ^ 1) + 1;
          }
        }
      }
      else {
        iVar2 = fn_82F86A50(uVar1,1);
        if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
          fn_82F63CA0(param_2,*(undefined4 *)(param_1 + 0x18),param_4[5]);
          if (param_4[5] != 4) {
            return 0;
          }
          iVar2 = *param_2;
          if (iVar2 != 0) {
            iVar3 = param_4[2] + iVar2;
            if (-1 < (int)param_4[3]) {
              iVar3 = param_4[3] + *(int *)(*(int *)(param_4[3] + iVar2) + param_4[4]) + iVar3;
            }
            *param_2 = iVar3;
            return 0;
          }
          return 0;
        }
      }
    }
    else {
      iVar2 = fn_82F86A50(uVar1,1);
      if ((iVar2 != 0) && (iVar2 = fn_82F86A50(param_2,1), iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x18);
        *param_2 = iVar2;
        iVar3 = param_4[2] + iVar2;
        if (-1 < (int)param_4[3]) {
          iVar3 = param_4[3] + *(int *)(*(int *)(param_4[3] + iVar2) + param_4[4]) + iVar3;
        }
        *param_2 = iVar3;
        return 0;
      }
    }
    fn_82F812C0();
  }
  return 0;
}

