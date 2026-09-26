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
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8269CEE0();
extern int fn_826F6FA8();
extern int fn_82711A18();
extern int fn_8271F828();


void fn_826FD340(int param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar4;
  int *piVar3;
  undefined8 uVar2;
  int *apiStack_40 [16];
  
  fn_8269CEE0(apiStack_40,param_1 + 0xad8);
  if (apiStack_40[0] != (int *)0x0) {
    apiStack_40[0][1] = apiStack_40[0][1] + 1;
    fn_8267C498(apiStack_40[0]);
  }
  if (apiStack_40[0] != param_2) {
    uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x1b);
    if ((uVar1 == 0) ||
       (param_2 = (int *)fn_82711A18(uVar1,param_1,apiStack_40[0],param_2,param_3),
       apiStack_40[0] != param_2)) {
      if ((apiStack_40[0] != (int *)0x0) &&
         ((apiStack_40[0][8] != 0 &&
          (cVar4 = (**(code **)(*apiStack_40[0] + 0xd0))(apiStack_40[0],param_2,param_4),
          cVar4 == '\0')))) {
        if ((uVar1 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar1);
        }
        goto LAB_826fd47c;
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0xcc))(param_2);
      }
      piVar3 = (int *)fn_826F6FA8(param_1,0);
      uVar2 = (**(code **)(*piVar3 + 0x5c))();
      fn_8271F828(uVar2,param_2,param_4);
      if ((uVar1 & 0xffffffff) == 0) goto LAB_826fd474;
    }
    fn_8267C4F0(uVar1);
  }
LAB_826fd474:
  if (apiStack_40[0] == (int *)0x0) {
    return;
  }
LAB_826fd47c:
  fn_8267C498(apiStack_40[0]);
  return;
}

