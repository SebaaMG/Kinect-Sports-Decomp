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
extern unsigned int *auStack_100;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_b0;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FA6AE8();
extern int fn_82FA8288();
extern int fn_82FF29A8();
extern int fn_82FF2E78();
extern int fn_82FF3ED8();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_10c;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_6c;
extern unsigned int uStack_bc;


undefined8
fn_82FA6C50(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar6;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar7;
  undefined4 in_stack_00000054;
  int *in_stack_0000005c;
  undefined4 auStack_170 [2];
  float afStack_168 [4];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 auStack_150 [17];
  undefined4 uStack_10c;
  undefined4 auStack_100 [17];
  undefined4 uStack_bc;
  undefined4 auStack_b0 [17];
  undefined4 uStack_6c;
  
  uVar7 = 2;
  if (param_2 == (int *)0x0) {
    uVar7 = 0x1f;
  }
  else {
    fn_82FF29A8(afStack_168,param_2,param_4,auStack_170);
    cVar6 = fn_82FF2E78((double)afStack_168[0]);
    if (cVar6 == '\0') {
      uStack_6c = 0;
      auStack_b0[0] = 0;
      fn_82FF3ED8(param_2,0x20,*(undefined4 *)(param_4 + 0x58),param_6,auStack_b0);
      uVar7 = 3;
    }
    else {
      cVar6 = (**(code **)(*param_2 + 0x74))((double)afStack_168[0],param_2);
      if (cVar6 == '\0') {
        uStack_bc = 0;
        auStack_100[0] = 0;
        uVar7 = 3;
        fn_82FF3ED8(param_2,0x1f,*(undefined4 *)(param_4 + 0x58),param_6,auStack_100);
      }
      else {
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_10c = 0;
        auStack_150[0] = 0;
        uVar3 = fn_82FA5060(lbl_831BC768,0x1a0);
        if ((uVar3 & 0xffffffff) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)fn_82FA8288(uVar3,param_1,param_2,param_3,param_4,param_6,param_7,
                                            auStack_150);
        }
        *in_stack_0000005c = (int)piVar4;
        if (piVar4 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar4 + 4))(piVar4,&uStack_158);
          if (iVar5 == 1) {
            *(undefined4 *)(*in_stack_0000005c + 0x140) = auStack_170[0];
            *(undefined4 *)(*in_stack_0000005c + 0x134) = in_stack_00000054;
            fn_82FA6AE8(*in_stack_0000005c,param_5);
            return 1;
          }
          (**(code **)(*(int *)*in_stack_0000005c + 8))((int *)*in_stack_0000005c,1);
          uVar2 = lbl_831BC768;
          puVar1 = (undefined4 *)*in_stack_0000005c;
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(puVar1,0);
            fn_82FA5190(uVar2,puVar1);
          }
          *in_stack_0000005c = 0;
          return 2;
        }
      }
      (**(code **)(*param_2 + 0x78))(param_2,param_4,3,0);
    }
  }
  return uVar7;
}

