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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82A34678();
extern int fn_82A34938();
extern int fn_82A37298();
extern int fn_82A37D48();


void fn_82A34C78(int param_1,int param_2)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 uVar4;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [64];
  
  uVar4 = 0;
  auStack_50[0] = 0;
  iVar2 = -0x3fffffff;
  if (**(int **)(param_2 + 0x18) == -1) {
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      auStack_48[0] = 0;
      iVar2 = (**(code **)(param_1 + 0x3c))
                        (0xffffffff820893a4,*(undefined4 *)(param_2 + 4),0,0,
                         *(undefined4 *)(param_1 + 400),auStack_48,0,auStack_50);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    fn_82A34938(param_1,param_2 + 0xc,auStack_40,auStack_48);
    puVar3 = (undefined4 *)
             fn_82A37298(param_1 + 0x10c,param_2 + 0xc,*(undefined4 *)(param_1 + 400),auStack_40
                             ,*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(param_1 + 0x40),auStack_48[0]);
    if (puVar3[4] == 0) {
      if ((uint)(0x8000 << (*(uint *)(puVar3[2] + 0xc) >> 4 & 3)) <= *(uint *)(param_1 + 400)) {
        fn_82A37D48(param_1 + 0x8c,*puVar3);
      }
      uVar1 = fn_82A34678(param_1,puVar3[2],*(undefined4 *)(param_2 + 0x14));
      **(undefined8 **)(param_2 + 0x18) = uVar1;
    }
    uVar4 = puVar3[4];
    if ((*(code **)(param_1 + 0x40) != (code *)0x0) && (-1 < iVar2)) {
      (**(code **)(param_1 + 0x40))(uVar4,auStack_50[0]);
    }
  }
  **(undefined4 **)(param_2 + 0x1c) = uVar4;
  return;
}

