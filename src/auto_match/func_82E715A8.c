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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E6FC88();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_82E715A8(int param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong alStack_38 [7];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    alStack_38[0] = 0;
    lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                      (*(int **)(param_1 + 0x58),param_2,alStack_38);
    if (-1 < lVar1) {
      uStack_40 = 0;
      lVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x44))(*(int **)(param_1 + 0x58),&uStack_40)
      ;
      if (-1 < lVar1) {
        lVar2 = fn_82E50BE8(uStack_40,0,0,0,0);
        if (lVar2 == 0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          uStack_3c = 0;
          lVar1 = (**(code **)(*param_2 + 0x30))(param_2,lVar2,uStack_40,&uStack_3c);
          if (((-1 < lVar1) &&
              (lVar1 = fn_82E6FC88(param_1,*(longlong *)(param_1 + 0x30) + alStack_38[0]),
              -1 < lVar1)) &&
             (lVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))
                                (*(int **)(param_1 + 0x2c),
                                 *(longlong *)(param_1 + 0x30) + alStack_38[0]), -1 < lVar1)) {
            lVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))
                              (*(int **)(param_1 + 0x2c),lVar2,uStack_40,&uStack_3c);
          }
          fn_82E4FE40(lVar2);
        }
      }
    }
  }
  return lVar1;
}

