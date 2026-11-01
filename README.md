# Домашнее задание к работе 10

## Условие задачи

Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. индивидуальное задание работы 9) предлагает меню выбора одной из операций:
1) Рассчитать площадь;
2) Вывести определение фигуры;
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Сравнить площадь двух фигур
6) Вывести параметры фигуры


## 1. Алгоритм и блок-схема

1. Начало.
2. Ввести символ для построения первой трапеции.
3. Ввести высоту, верхнее основание и угол наклона.
4. Вывести меню доступных операций.
5. Ввести номер выбранной операции.
6. Выполнить выбранную операцию:
   - Рассчитать площадь трапеции.
   - Вывести определение прямоугольной трапеции.
   - Нарисовать трапецию символом, заданным пользователем.
   - Нарисовать трапецию символом `*`.
   - Сравнить площадь первой трапеции с площадью второй.
   - Вывести параметры первой трапеции.
7. Если выбрана операция сравнения, ввести параметры второй трапеции и выполнить сравнение площадей.
8. После выполнения операции вернуться к меню.
9. Если выбран пункт `0`, завершить программу.
10. Конец.

### Блок-схема

<img width="1854" height="843" alt="{362CA22C-AA01-4D1F-AEAA-4F744E0FA5EC}" src="https://github.com/user-attachments/assets/7ab3721b-b0bf-4ce7-993c-43160cc4827c" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MvPofHagmZ9HTqAhDfql%22%3E7V1tc%2BJIkv41xPZshIl6UenlY9vu3rm4mb256424nf3SIYNs2MbIJ%2Bhpe379qZBKSFkFKomqQmDREW0QSAgpX558MitzQu%2BeX%2F%2BWxS%2BLX9N5spoQNH%2Bd0PsJIV6AvfwP3%2FJWbKE%2BDYotT9lyXmzD%2Bw1fln8m5UZUbv2%2BnCebxge3abraLl%2BaG2fpep3Mto1tcZalP5ofe0xXzW99iZ8SacOXWbySt%2F7vcr5dFFtDEuy3%2F5wsnxbim7EfFe88x%2BLD5S%2FZLOJ5%2BqO2iX6a0LssTbfFs%2BfXu2TFr564LsV%2Bnw%2B8W51Ylqy3Ojv8%2FN%2F%2F%2BpL63tt%2F%2FpJ8%2Fvr3fz%2F9YMHvN4qjlJs22zdxDfLj5Jc7f3H7Y7HcJl9e4hl%2F50d%2By%2FNti%2B3zKn%2BF86fx5qW4B4%2FL1yT%2F2tvH5Wp1l67SLN%2B24lfpZh5n3z5MCP28e0zIXfX8p%2Fzzm22WfkvUe6Ddo9ijeM73eEzX28%2Fx83LFBewfy%2BdcVgj6e%2FIj%2F%2F9%2F0ud4XX6kFKz8EhWvu3xFcT3%2BiFffy%2BsxuUeT6J7%2Ff4sm%2BQ8PA%2FE8%2F%2F929%2F%2Bncqck2yavteta3pq%2FJelzss3e8o8satLDSlH5sZc07JXbhEoxPPVpsanUqRsq9otLYX%2BqDr%2BXh%2FxJKRIdxIMUx03mkpLI8pJ%2Bz2bJkWMxWa7yw34pX6bZdpE%2Bpet49Wm%2F9TZLv6%2FnXJLu%2BY3bf%2BaXNH0pZe7fyXb7Vt7e%2BPs2bUrkPHmMv6%2B2v8QPyeo2nn172h1R3P1C%2BXOpi7PtR24s8m2zVbzZLGdi8%2BflShwrWc%2FFh9bpOim2lO%2BjaxH2%2FLZmb%2F%2Fkv2jKxMvfqwuQv7h%2FLX9u8eqtfFWa5jh7SrbHBIrK2qRUiyxZxdvlH02xU8l3uetv6TIXyEpNIh81dMSDKlKcabkX0JLqNPorDtOxq9kifX74vmm3q0ckK%2FhML0SypBvPb%2FOE%2BPEz%2F7Wr7e4jKDd7n3vZzqjddoYREIrIlt30tW5%2Fw7j1F4HLMS4K3fd3N37zkh%2B%2FfnH8%2F%2FvOcdHuG24ey7P6mH%2Fk52T1R7JdzuJCXHbvb3anxN%2FF5OV194bYP3%2F2xP%2FOFsl2tlh%2B4yLHj48edsJ3uxMG%2FuzzznqtP2RJvPr69pSufhLnlr9XnF5xpH6OncnCGQDhDFhDOP2AWhLOwKBTj87h1JPX5fafwgvlz3%2Ffu6v81d5B8RfCPx3ya3tPpvZrmgCiq7LpustTveNJghI2Qqv4QdxiJMvLMUEDwrG7lCBuyC%2FZmmOv%2FHhJfglvuXrlOr76WL7xvJzPC9lJcmUvz4TfnhfuwHe%2Fm91O2H2%2BZbleJNly%2B4%2FkdReI7I0auavMV%2Fl0d17kLlfk7X%2Flhne55R9a7e50ms2TrLihjU1FDCg2AXkgd8ekpdzpt3g%2BX66fdEXLmInlBzpsYmsmNJRMKHqMZ819VO5Bsrm1MIntwiRSM6nF6XQ0qUqxL3e5QVOaw7yGDe0MG73mDunj4yaxgg8jV%2FiwDg4%2B8n9XBA5mxdG51Na%2BIHt6%2BFAcHIk%2FPxV%2FVe%2F8pIQLr01cWqEHjk3NoYIekDUIbEFWrLDqI2Y9J2blIpAL4i02ikQVMseaModR0BS60LMmdNQgFj0LwVQjhR5W6exbgxVqgNUKoP5ee0cNVuuKkwtjgucsCYaqIEooVFFkmkDXl9WMowevJFY7owE0RQE7EkAB92%2Ff4YtEyAVHXW2SfkVSKwUB9L5E60qP0E9U%2B7OZkWM2E7MOwjsK5YlYo9VYCqhmm0THiAK5C4Ipax6lsFX2JE%2BLSd0s4hf%2BNP9UvFolq%2FQpi585O5Bk%2BX3aUQrN937bv9EGYnfH%2Fo%2F1ZjlPKpF6TUSm%2BjjM%2FYTv2afgSmHuQ2U8b2qB2DaL1xtxtyq0W0fDVWhVHucu3szi%2BTLO3%2Fo1XafwbSVmjl7Ko3Pu5maezNIsF%2FR0fbNarsuPlDyQEln%2Fufv1B0B1V3R%2Fht%2BD9K49%2FNmbt%2BeHdFVEvsVzXFyI4gTXD5uX2hV4RxdmUVyTh%2BLPApcvx6uz%2B208G1JcEf6svDhZssnRUOMFqb%2BgJoNWTOWolXhRA%2FHTyG%2F4qhviW4taTWZQCJFx0x7U7KsRai6piZq0aOR6%2BiMMJvUEyDTyqg0HkiAXBaL6BNy7n1sDBZ1KGpgmGlPRMEqEVpNyQM2gqYeDNhyXy078VvtAmSM5CPMCkHmsYN%2FnQ7iQ%2BNE0oF13gqxS2P1bguaX5E%2BKH6sXNmGE8ZT4WgC2%2Ffx910FYaNLqKMgyC1Znr4osqinjDZoizzuqkVdR8sJ%2FkdqquDAWPCPmiXJbY9YiV0s2RU219II2VUas2w4YKFvrDig8ukOLpciVu3mCDJYG6ZoJqfAMJmxsW4nIoJXwHRuJbv66RzXHRQEZTfwRObAoHahKoIchPIS2v4XkU4jcapKqzOVyqKdLTvwLnqJHpCisbz29GbKGWwz9isQ8RKebq5%2FHBq2xoH3PVGzXMM9IzzzjKcJRM9pkOXY4bqSVwZhesdS1mvdzVQAKcmK0gc7pd3bXyilaZf3WJgk8DbPshwSY5dAagSdWoTipdcptUDj3Cm40f%2Fm4e%2FQTRAXSO1uJXFUoPylL6tU8%2BZkI8VOY7n4Ef79vnNyRyW3Af%2F3d5wmHzuVSBMyfHz0RE2rpKdQSkAhhCCJ3iMLNKaXJChn%2FPFipSzXCxVZE9g2%2B%2BwT6miDptGWFe76MUeodFm9Nxgf3jHgjFgEP6HrVItFbtmihBvjC0NmbcHrl6jHucrAxZARWhklkqEROmrPBvsl4VTbB5tnD7vLikm%2FUNF9YUf56Rg7Pi%2BQeAzjsadWYJx%2BMUMd2zSQpjp2w4lch13RY3DQjeIqhXJO%2Bck3IlAZeVD3AcR2z1UKjjIi4uG%2BjiLeLuHD7QxHxo1IJ7a6%2BsO%2BNuCuB1iox114iKfOIPZBmx%2BjtZJj5Z3Gq5hpi4Cay9Hx%2F6pOGiEBzaAxaCptiMrboeH273%2FGnLJ4vk%2F23lMtDugqCwkQUJM5Llrgnx9RlwbgKabqQipwvxNwycKqQYPFXTRn%2B5a9%2FaSe1dpfEMNVMoNhjKPY3EbMk955RxzzGVLqOmQ0rptphz6bM4b6lEUzIsziQ4xojr9lzsXtjEKETY2eQs3YGAcsWTbTg8IJmFb7%2BmjP7S3A9Yh6BjFm%2FMet3hVk%2Fz5MDA2vZeO9Cs%2FHGllgOIgrYN8T7sKgE8mBHvFNRuqoNCUh7eFSSQQr5C3MyaDLxIRzNiNJbUbqnm7h1hNKxlKygsPmNNkpXHCsAUaZtoG5yoeLQY09ck2lb3SB1pTp0INW1qoUwClskvfOaQG58m8LrMyCixxbU%2BFQS%2Fr4ragL5UBiWWNjWo5K77B%2Fwjq0whxLwgoaUZsJeHIhtVf6vq%2BupyvsPHMFiXBxq4e%2Brz7QQi5kWP5SNmLVKSuEhzIDZcNhuf0BglhFJrs4JZgMiyRzpW5uowAPSGdkeqXAq6yzOd3TCZ3fChlnnfdnuAGlnYRVGeuuc9NZLlt%2Fvr19zGV%2Bul3y11AfbdFYIEICIAYT5tMZlib6n78L9DyjqZw4bAdmJ%2BvkKBIhSvS5hf7VGv9pbt2Gk4ly8%2FFxQ9WjGVzgi8MC24Yd3KvygI%2FwYCPwYOYBDtuu9cwDUIgcQIU%2ByrqFkxszBAJdDyEbceQB35hc%2F%2FrrNr2TyZ7qc4w%2FNVqOm06qK4keCchELGoLoEd4ZbO9aQTcvqZzMnEiazEexcR2Odj5qWMQUrF%2BUQqG%2BhZBSjYptTGiyJSNz0pLxKuRZ3OaByDMPm6L6oymUfVdOKqIxqRjBtoCfmvhkCvpgDHqugXOlEMpqa439aMZXiOcIfV1D33kW%2F%2FhQnzlgF%2FtqcLChL1tUmBEzNwOavCNwMCAa1vccgIO9HQwYpoclqBcNiwPQ%2BpQQQaNqtjOGvVOlZZ3aXVg50QoTv75E6lqGIeIEesMQoYsjDDk7DLHCvXqRB6Z%2FXBD3KgzWe%2BdePYvcK%2FZBg3d7y1n8LsPyWvvYecP2%2BwMiBcLAnd9HUxSdkH095m7DJjxlPdOnmAGB9yAEsO2z%2FVN9tnqe7%2BizL586QHjA3IHJHIXIpLhtQ6pp8%2BNsKzuS3eb6%2BOq9tymbn%2Bw7mqIeSGGQ%2FR0PeSZsyDPpRqSnzmuFcSNzTBcHCtt%2BApK9ihlQ0q1%2Fq9NuJfmFFiaxrwexL%2BhQy2BGwhj2DY7YSrsNZC9MCLo3Svg5Wf2RcFSj5GAxeXlVkrCzRbKdLZbfJqK7036ddyGIR5d5n9xrQMDXY%2B1tfa%2BJVAPYac6ceJqkZANFaOZwHEsHwtVWDGg5nusy%2BWQPLgkL20beKYIlUEgQIbcEZ3AqwSkkewyWzhoslZaTH%2BiwVa9Z7VCy2ugxnjX3UXkkuaOMglqtrHhxOh2teBvjSvy%2BnZ5EFVpzB3sRXWCWX73OjvZn7Cn12kTDFWLhiNgcEukDlO1NIArONmlhBMpqoMxlIJfEW2wU%2FiqEDlDJOPQA9rC2MCww2eToPNRW64SdPomJixobqERDFTmnia1FnH6E6O2GCNAUBaytDsIljRsYpXHPE%2Bp1mSZ14XIrRQL0voTsSqfQT1ZPYFIxck2ldiktH8XyRMDRbjB11%2FaeKnjSClokV1sdyAEbEz2T03JCJ6NE6lRUGDTIqGnkVRuuYSp878oLOFFZU%2FJDF33UKxThYUErmKumZABgY0wbxZTSHgTRaCq04JSdojLo7LKPCAc0Kz0ZaZLnGJGeFSMEARI0gLUnll2eyEqZsTtOVgfWlJFFNXW8yfGw52kHHReb3OS%2FSG1XHFVfU4%2B2sf1d7UWulGyKyH41V7NvC%2FOP6zSOQOFV%2Bw7APrXuELKjO7SYDIJAvs3vu0BNrjdwvP4yxAYtRqBA01YtRjf33SPRdlG4RhOOiFB8IEs%2FcQB0MerbLlpC%2FiFsmGtbmchh3dmrxK66fCfOWbxaJav0KYuf89v3UvMCjfdq7qF75frj8jWZl1J1vbmXagBXD4ZZNe5KjGyv0hq0CiEP0hnGSObQZPexQF0D7KrGomGjkZ6NxlOEo2YEyhBtsdTKAE0vZ321Nv4EbuU0AdZLFw9u8bDCL45jgsYxQb1zlxpjgrDPwCITa5PpQ5OrqkJ1O%2F4hEecXm8HvG6z0CYw0%2Fclp9feqNsOn1OTDtu%2F60TaJAIxzXd8fumwpd8mI%2Fk34vbLImnsdc%2FgeFlBDAkkidMxZ4eAysdH1NVbBH6qocRCtVfIgU%2Bqt4lmbcCGyiiNX4bwej921ol1e5H0zT2ZpFvNO6zer5bqU6LJg%2FBQYvjaJcXXYE48R4HYjamuBSmSS0B5674AB9QyKXIwhtNoziDCAM0VjK808coibMp7fr76d23Ek9wxy3bgwKsns3gtqIkU2aFxQM3YMGkTHIGGu3nvHIGaxYxDxQB6fUnu92iPPoN8X0jFUvz%2BgnkGR0%2BI23n%2Byt9s%2FXLfFJF7I65uEVh0Lkgm2PTc71XOri%2FVHz33xfYOwL2apDbBvUDSO2xgANbbgfNgD%2F49zYNgtB7a3u8J2WpukEY1E7ACkLXcLuSV1LWUEln8eK1s7Tcr0JkOPUuZAyohjKfNhVbI1KasGYZuJfhSF%2F2Nufxi5fb4sAjVpXw8FxwPAgysM2oM73YawbWn%2FsHtHoT3heQgKaIdklEppf9ghwHJIhpHJtMSooMNV0C4pGV0tDA1oIZr61O9ce0Ok2hs47ENbCaUjQW9oXQWJSRUc69%2FsqeDwWE6MdNObx3UQty3NVTgvsKbUh3qj7wZhkZPjjGJ1EcdgaGjzVB9KusdxyZMUiPvWOjdhdKF8z0FhGhcljIsSeqilxqIE7mQaahmgyFriFqORIhuCV%2BCYciIqrblTQC2dra34BwYE0YPrLoPQniCa7NpT%2BZuxhkADXetGuG6WpBNK0VQwNkLuor5NYRQHC13TTyJqNyTaY3mMvmi7mKnVjVWd0uaELB%2Ba1A6iHcKDBdhtyyOMuzCrI1tzBWzNqRzMEQBxiLuEHEzfFYgSCyoFvNbVhYxoewBou8HBkA%2Bg6MYyzCYIxHt%2Bm1SaA9n4QjnAg%2FJ0ThoGT66IhDncNv6dsjCwNYRVFgZfaM%2BWK%2FMLXKO5H6h4GKwmYqy7CLiWwyfOeBhsslFJ5XDGYLU9WBVGYCjBakAM8jCKg7nnYUzOD6mw%2FCjaGqLtYn1yt8IaczxMQM7Pw5ALBfbXBSCKSmc6Ec1zyvr6GycV0ARMAyMeWN8rNWQ1BxrEMDxDDHcoW9aRMBwCYdjwDXtXcaJ3IGbKuwLRNKELIQ8m5kW9KyylI7mu7yJmgfvwR0a9Tx3Ew9ZBBuei6qCxADiqvg39pSNJ6mxdCY2GGEQRPY9KOAAltBQmEUMrflDk6c8y3LdOALrTe8UPbOUkHcm6FupVmxqYmHw5o24kyaqClTLg2QUjyGRHGikggRDJ2vJyTIlROzzM9SbvfFasbWtMFZDo%2FpQhs3zeE9GPUQ73%2FFCYXAB88hjalPXG2DWIoiOZNSwyyxxvRRVuwodugkEBtNaHVwxFvGw%2F0WPxa%2BfZLBeA8z%2FtHvCkrHuJoJcjyGO77oFyFRhXVh6m0PQjZb%2FNYVi38mWo3LtRWqW85%2B6Udu6OaD206NLbn5KQNZPJN%2FoBr%2F1eapiOAah%2BALpTNHtRpx9BS2cvD0a7TL1vhRN0DDvfY9gZmQ87fd%2FXbwHUJe4M4Gxy0r9FCUQkFRJwhki0pnKMcaejpoSu404fomtJAM05Cs8oP3kmRzHGnWeMO4v2%2F93jTiYwirHRHRRJjGEZmWkOdA%2BhE8F9%2B3%2FzU5mi2gOMDcaOB7xjkYfrH%2BQKSzEGue8uyKXYJw35HVaQ640dwwcAl27OxtNHEk9%2FbDzEiXgpMIiXhj5gZECDxbCniEZbpaf%2FZDEPtfaq7QxPCCCAaCDa2mjik2q1lXSAHgDF8%2BUxk9LhrMOS8GRYog45xiklVzJfjCCxvklgjwuaL1ZZrfc%2BYMy3OGCMEgomLR3r7XGa%2B2dHvP1VQ81iSHKvW6jRAZRWvSjKW8iovVtIDSK4SiAGlhq5MObqOAwdUmU0010bfXx5Quh3H4VASdictOlDO6cN%2FiASrZb1u8J94jK%2BOzu6cGZCJekwaELZO717D%2B7uHmxwYPDuvVe6rOjx7OgGBoG9G2iSg6pM8Yhg3gmCYUYQTISizoG4jGCgkugjGHCkALlGMEYrrJi6gnRUwmtVQt152S1K6Ied11dS6gPV8fsqoXQkCFqsK%2BFIr%2B3oNaN1q5BeY0HzLluk10Rmz4xRFeTrdaXXGubIWNsF5ja9xrCYQN4jvXbYIDEC8AVivRNkjAKxd12y45cXsn9uTJzxmBu7ztwYFTVZl5ga843y8EO39YMCn9idrecrpI5V4%2FQ29RB7MhgA9kaxDLom64beO9nQq%2FvzjIbevaGvrY4xYeKxL6TxrfGJYVRe%2Bka7TLHRhmvbcN%2FFrKy9GIZhYMOI%2BwCvs94ZTZ82l%2BFiCtvoWrfiwclWXD3QfbTiF2%2FFIxKABSCDsuJaozfzIy1fNkk7ixZvXnL557K0fOWm%2BTpYZLWcfNzJyafd%2F%2FUQz9eWnLY8owfZOL9p6Ji9PGPQZaZam3dXJDgG5ds7cHFOPS8KUJux6FqIHoL1Eqy5Sk76vO8d%2FXxL1boPllMzyKPp%2Bnh4Gpi4bucYEIMK4Q188UcXtOsWiwbGl2bAlqNeWd1xSBTh55mHJvoawQDp5sHl3boaAU%2FjDBphksQTJz9YjRisjyDUtEbkwTicuS2KRA9JI%2FaAOIIdWrQC%2B1T6RjhRRVcxpFM5g2YYnUTB1KHhWB9iANlbdHht7bHbZtCevMSwkvuDmgLXzuruoKfUFM4UDfs282bQSVpXYKMdOamC2xwV%2BKIVGE0DSjuXX8mdqmhf%2BKfoVOXcyxlNAFB1GmtUkktWEr%2BtzY%2Bi8zeopcfY2AiIM6iI0Wp9bwSCV6giiHVfDYgwlOy%2BPZjlvlnmlCR%2FmaW8T8z%2B41n8svg1nfOc1qf%2FBw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Программа

Программа написана на языке **C++**.
```cpp
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void print__definition(void);
void draw(char symbol, int h, int b, double ygol);
double area_trapezoid1(int h, int b, double ygol);
double area_trapezoid2(int h1, int b1, double ygol1);
void draw1(char symbol1, int h, int b, double ygol);

main() {
	setlocale(LC_ALL, "RUS");
	int z;
	char symbol, symbol1 = '*';
	int h, b, h1, b1;
	double ygol, ygol1, result1, result2, result3;

	printf("----- Введите данные для первой трапеции -----\n");
	printf("Введите символ из которого будет построена трапеция:");
	scanf("%c", &symbol);
	printf("Введите высоту:");
	scanf("%d", &h);
	printf("Введите верхнее основание b:");
	scanf("%d", &b);
	printf("Введите угол:");
	scanf("%lf", &ygol);

	do {
		printf("\n=======================================================\n");
		printf("                           МЕНЮ                          \n");
		printf("=========================================================\n");
		printf("1) Рассчитать площадь\n");
		printf("2) Вывести определение фигуры\n");
		printf("3) Нарисовать фигуру символом, заданным пользователем\n");
		printf("4) Нарисовать фигуру символом *\n");
		printf("5) Сравнить площадь с другой трапецией\n");
		printf("6) Вывести параметры фигуры\n");
		printf("0) Выйти\n");
		printf("Выберите операцию: ");
		scanf("%d", &z);

		switch (z) {
		case 1: {
			printf("\n\n--- ПЛОЩАДЬ ФИГУРЫ ---\n");
			printf("Площадь заданной трапеции %.2lf\n\n", area_trapezoid1(h, b, ygol));
			continue;
		}
		case 2: {
			print__definition();
			continue;
		}
		case 3: {
			draw(symbol, h, b, ygol);
			continue;
		case 4: {
			draw1(symbol1, h, b, ygol);
			continue;
		}
		}
		case 5: {
			printf("\n\n----- Введите данные для второй трапеции -----\n");
			printf("Введите высоту:");
			scanf("%d", &h1);
			printf("Введите верхнее основание b:");
			scanf("%d", &b1);
			printf("Введите угол:");
			scanf("%lf", &ygol1);
			result1 = area_trapezoid1(h,b,ygol);
			result2 = area_trapezoid2(h1, b1, ygol1);
			result3 = fabs(result1-result2);
			printf("Площадь первой трапеции равна %.2lf\n", result1);
			printf("Площадь второй трапеции равна %.2lf\n", result2);
			if (result3 > 0) {
				printf("Первая трапеция больше второй на %.2lf\n\n", result3);
			}
			else if (result3 = 0) {
				printf("Первая и вторая трапеции равны, их площадь равна %.2lf\n\n", result1);
			}
			else {
				printf("Вторая трапеция больше первой на %.2lf\n\n", result3);
			}
			continue;
		}
		case 6: {
			printf("\n\n------ Параметры фигуры ------ \n");
			printf("Символ из которого будет построена трапеция %c", symbol);
			printf("Высота равна %d\n", h);
			printf("Верхнее основание b равно %d\n", b);
			printf("Угол равен %.2lf\n\n", ygol);
		}
		}
	} 
	while (z != 0);
	return 0;
	
}

double area_trapezoid1(int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	float a = b + (h / tan(real_ygol));
	return a;
}

double area_trapezoid2(int h1, int b1, double ygol1) {
	double real_ygol1 = ygol1 * M_PI / 180.0;
	float a1 = b1+ (h1 / tan(real_ygol1));
	return a1;
}

void draw(char symbol, int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	printf("\n\nПрямоугольная трапеция:\n\n");
	for (int y = 0; y < h; y++) {
		int chetchik = b + (y / tan(real_ygol));
		for (int x = 0; x < chetchik; x++) {
			printf("%c", symbol);
		}
		printf("\n");
	}
}

void draw1(char symbol1, int h, int b, double ygol) {
	double real_ygol = ygol * M_PI / 180.0;
	printf("\n\nПрямоугольная трапеция:\n\n");
	for (int y = 0; y < h; y++) {
		int chetchik = b + (y / tan(real_ygol));
		for (int x = 0; x < chetchik; x++) {
			printf("%c", symbol1);
		}
		printf("\n");
	}
}

void print__definition(void) {
	printf("\n\n--- ОПРЕДЕЛЕНИЕ ФИГУРЫ ---\n");
	printf("Прямоугольная трапеция — это четырехугольник (трапеция), у которого один из углов (или оба угла при одной из боковых сторон) является прямым, то есть равен 90\n");
	printf("Основания трапеции параллельны, а высота перпендикулярна обоим основаниям.\n\n");
}
```

## 3. Результаты работы программы

### Вывод меню

```text
----- Введите данные для первой трапеции -----
Введите символ из которого будет построена трапеция:5
Введите высоту:7
Введите верхнее основание b:3
Введите угол:45

=======================================================
                           МЕНЮ
=========================================================
1) Рассчитать площадь
2) Вывести определение фигуры
3) Нарисовать фигуру символом, заданным пользователем
4) Нарисовать фигуру символом *
5) Сравнить площадь с другой трапецией
6) Вывести параметры фигуры
0) Выйти
Выберите операцию:
```

### Пример построения трапеции

```text
Введите символ из которого будет построена трапеция:*
Введите высоту:5
Введите верхнее основание b:3
Введите угол:45

Прямоугольная трапеция:

***
****
*****
******
*******
```

### Пример вывода параметров фигуры

```text
------ Параметры фигуры ------
Символ из которого будет построена трапеция *
Высота равна 5
Верхнее основание b равно 3
Угол равен 45.00
```

### Пример вывода сравнения двух фигур
```text
----- Введите данные для второй трапеции -----
Введите высоту:5
Введите верхнее основание b:3
Введите угол:45
Площадь первой трапеции равна 10,00
Площадь второй трапеции равна 8,00
Первая трапеция больше второй на 2,00
```

## 4. Информация о разработчике

```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
```
