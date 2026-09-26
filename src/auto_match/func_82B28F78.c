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
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B17248();
extern int fn_82B230F8();


void fn_82B28F78(int param_1,uint param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  uint *puVar6;
  char cVar8;
  int iVar7;
  uint *puVar9;
  uint uVar10;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x1c);
  puVar4 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar4 | 1;
  do {
    fn_82B230F8(param_1,param_2,param_4,param_5);
    if (((*(uint *)(param_2 + 8) & 0x380000) != 0) && (*(uint **)(param_2 + 0x2c) == param_3)) {
      if (((*param_3 & 0xe000000) == 0x2000000) && ((*param_3 & 0x1f) == 0)) {
        uVar10 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
        if ((uVar10 != 0xb) && (uVar10 != 10)) {
          if (uVar10 == 0x67) {
            cVar8 = fn_82B17248(param_2,param_1);
            if (cVar8 != '\0') goto LAB_82b2905c;
          }
          if (((uVar10 != 1) && (uVar10 != 2)) ||
             ((*(uint *)(*(int *)(*(int *)(param_2 + 0x30) + 0xc) + 8) & 0x3f80) != 16000))
          goto LAB_82b29168;
        }
LAB_82b2905c:
        for (puVar2 = *(uint **)(param_2 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
          uVar10 = puVar2[4];
          if (uVar10 != 0) {
            if ((*puVar2 & 0xe000000) != 0) {
              uVar1 = *(uint *)(uVar10 + 8) >> 7 & 0x7f;
              if ((uVar1 == 0) || (bVar5 = true, 0x66 < uVar1)) {
                bVar5 = false;
              }
              if ((bVar5) || (uVar1 == 0x67)) {
                uVar1 = ((int)param_4 - *(int *)(param_1 + 0x268)) / 0x44;
                if ((*(uint *)(((uVar1 >> 5) + 0x15) * 4 + *(int *)(uVar10 + 0x1c)) >>
                     (uVar1 & 0x1f) & 1) != 0) {
                  fn_82B230F8(param_1,uVar10,param_4,param_5);
                  if (((*puVar2 & 0x1f) == 0) && ((*puVar2 & 0xe000000) == 0x2000000)) {
                    if ((*puVar4 & 1) == 0) {
                      uVar10 = *puVar6 & 0xfffffffe;
                      iVar7 = uVar10 - 4;
                      if ((iVar7 == 0) || (*(uint *)(uVar10 + 8) < *(int *)(uVar10 + 4) + 1U))
                      goto LAB_82b2913c;
                    }
                    else {
LAB_82b2913c:
                      iVar7 = fn_82AD6090(puVar6,1);
                    }
                    iVar3 = *(int *)(iVar7 + 8);
                    *(int *)(iVar7 + 8) = iVar3 + 1;
                    *(uint **)((iVar3 + 4) * 4 + iVar7) = puVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_82b29168:
    if ((*puVar4 & 1) != 0) {
LAB_82b291e4:
      *puVar6 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    if (*puVar4 == 0) goto LAB_82b291e4;
    puVar2 = (uint *)(*puVar6 & 0xfffffffe);
    puVar9 = puVar2 + -1;
    uVar10 = puVar2[1] - 1;
    param_3 = (uint *)puVar9[puVar2[1] + 3];
    puVar2[1] = uVar10;
    if (uVar10 == 0) {
      *(uint *)(*puVar2 & 0xfffffffe) = *puVar9;
      *(uint *)(*puVar9 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar9,((ulonglong)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = param_3[4];
  } while( true );
}

