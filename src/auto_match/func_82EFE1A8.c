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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))
extern unsigned int *auStack_6c;
extern int fn_82F261D8();
extern unsigned int uStack_70;


byte fn_82EFE1A8(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int *param_5,
                  ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uStack_70;
  uint auStack_6c [27];
  
  auStack_6c[0] = param_5[2];
  uStack_70 = param_5[3];
  fn_82F261D8(param_1,auStack_6c,&uStack_70,param_7,param_8);
  (**(code **)(param_1 + 0x9b8))
            ((longlong)((int)uStack_70 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
             (longlong)((int)auStack_6c[0] >> 2) + param_3,*(int *)(param_1 + 0x564),param_4,0x10,
             auStack_6c[0] & 3,uStack_70 & 3,*(undefined4 *)(param_1 + 0x904),
             *(undefined4 *)(param_1 + 0x618));
  iVar1 = (**(code **)(param_1 + 0x5298))(param_2,0x10,param_4,0x10,0x10);
  if (*param_5 != 0) {
    auStack_6c[0] = param_5[4];
    uStack_70 = param_5[5];
    fn_82F261D8(param_1,auStack_6c,&uStack_70,param_7,param_8);
    (**(code **)(param_1 + 0x9b8))
              ((longlong)((int)uStack_70 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
               (longlong)((int)auStack_6c[0] >> 2) + param_3,*(int *)(param_1 + 0x564),param_4,0x10,
               auStack_6c[0] & 3,uStack_70 & 3,*(undefined4 *)(param_1 + 0x904),
               *(undefined4 *)(param_1 + 0x618));
    iVar2 = (**(code **)(param_1 + 0x5298))(param_2,0x10,param_4,0x10,0x10);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
  }
  return -!CARRY8((longlong)(iVar1 * 0x32 >> 8) - param_6,param_6 ^ 0x80000000) & 1;
}

